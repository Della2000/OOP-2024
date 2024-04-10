#pragma once
#include "Car.h"

class BMW : public Car
{

public:
	BMW(int fuelcapacity, int fuelconsumption) : Car(fuelcapacity, fuelconsumption) {}

	int AverageSpeed(int viteza, Weather vreme);
};

