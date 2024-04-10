#include "Volvo.h"

int Volvo::AverageSpeed(int viteza, Weather vreme)
{
	this->speed = viteza;
	switch (vreme) {

	case Weather::Rain:
		viteza -= 15;
		break;
	case Weather::Sunny:
		viteza = viteza;
		break;
	case Weather::Snow:
		viteza -= 15;
		break;
	}
	return viteza;
}
}
