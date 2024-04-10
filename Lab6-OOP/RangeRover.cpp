#include "RangeRover.h"

int RangeRover::AverageSpeed(int viteza, Weather vreme)
{
	this->speed = viteza;
	switch (vreme) {

	case Weather::Rain:
		viteza -= 5;
		break;
	case Weather::Sunny:
		viteza = viteza;
		break;
	case Weather::Snow:
		viteza -= 10;
		break;
	}
	return viteza;
}
}
