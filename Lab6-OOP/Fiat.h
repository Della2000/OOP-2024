#pragma once
#include "Car.h"

class Fiat : public Car 
{

public:
	Fiat(int fuelcapacity, int fuelconsumption) : Car(fuelcapacity, fuelconsumption) {}

	int AverageSpeed(int viteza, Weather vreme);
};

