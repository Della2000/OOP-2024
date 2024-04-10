#include "BMW.h"

int BMW::AverageSpeed(int viteza, Weather vreme)
{
	this->speed = viteza;
	switch (vreme) {

	case Weather::Rain:
		viteza -= 20;
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
