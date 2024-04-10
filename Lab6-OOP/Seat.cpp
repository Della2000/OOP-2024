#include "Seat.h"

int Seat::Average(int viteza, Weather vreme)
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
		viteza -= 20;
		break;
	}
	return viteza;
}
