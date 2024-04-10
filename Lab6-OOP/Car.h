#pragma once
#include "Weather.h"

enum class Weahter;

class Car
{
protected:
	int capacity;
	int consumption;
public:
	int speed;
	Car(int fuelcapacity, int fuelconsumption) {
		this->capacity = fuelcapacity;
		this->consumption = fuelconsumption;
	}
    
	virtual int AverageSpeed(int viteza, Weather vreme) {}
	char* name;
	char* GetName() {
		return name;
	}
};