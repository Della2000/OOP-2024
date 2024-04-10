#pragma once
#include "Car.h"

class Circuit : public Car
{
private:
	int lenght;
	Weather weather;
	Car** cars;
	int carsNumber;
	char* name;

public:
	Circuit(int lungime, Weather vreme, int masini);
	~Circuit();

	void SetLenght(int lungime);
	void AddCar(Car* masina);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};

