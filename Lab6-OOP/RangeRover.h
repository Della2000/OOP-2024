#pragma once
#include "Car.h"

class RangeRover : public Car
{

public:
	RangeRover(int fuelcapacity, int fuelconsumption) : Car(fuelcapacity, fuelconsumption){}

	int AverageSpeed(int viteza, Weather vreme);
};

