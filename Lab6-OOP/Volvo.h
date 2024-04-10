#pragma once
#include "Car.h"

class Volvo : public Car
{

public:
	Volvo(int fuelcapacity, int fuelconsumption) : Car(fuelcapacity, fuelconsumption) {}

	int AverageSpeed(int viteza, Weather vreme);

};

