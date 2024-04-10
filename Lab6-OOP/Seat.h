#pragma once
#include "Car.h"

class Seat : public Car
{

public:
	Seat(int fuelcapacity, int fuelconsumption) : Car(fuelcapacity, fuelconsumption) {}

	int Average(int viteza, Weather vreme);
};

