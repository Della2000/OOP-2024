#include "Fiat.h"

int Fiat::AverageSpeed(int viteza, Weather vreme)
{
	this->speed = viteza;
	switch (vreme) {

	case Weather::Rain:
		viteza -= 10;
		break;
	case Weather::Sunny:
		viteza = viteza;
		break;
	case Weather::Snow:
		viteza -= 30;
		break;
	}
	return viteza;
}
}
