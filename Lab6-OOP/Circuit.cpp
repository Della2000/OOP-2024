#include "Circuit.h"
#include <iostream>

Circuit::Circuit(int lungime, Weather vreme, int masini)
{
	this->lenght = lungime;
	this->weather = vreme;
	this->carsNumber = 0;
	cars = new Car * [masini];
}

Circuit::~Circuit()
{
	delete[] cars;
}

void Circuit::SetLenght(int lungime)
{
	this->lenght = lungime;
}

void Circuit::AddCar(Car* masina)
{
	cars[carsNumber] = masina;
	carsNumber++;
}

void Circuit::Race()
{
	for (int i = 0; i < carsNumber; ++i) {
			Car* currentCar = cars[i];
			int totalTime = lenght / currentCar->AverageSpeed(currentCar->speed, weather);
	}
}

void Circuit::ShowFinalRanks()
{
    for (int i = 0; i < carsNumber - 1; ++i) {
        for (int j = i + 1; j < carsNumber; ++j) {
            Car* car1 = cars[i];
            Car* car2 = cars[j];
            int time1 = lenght / car1->AverageSpeed(car1->speed, weather);
            int time2 = lenght / car2->AverageSpeed(car2->speed, weather);
            if (time1 > time2) {
                Car* temp = cars[i];
                cars[i] = cars[j];
                cars[j] = temp;
            }
        }
    }

    printf("%d ", "Final ranks: ");
    for (int i = 0; i < carsNumber; ++i) {
        Car* currentCar = cars[i];
        int totalTime = lenght / currentCar->AverageSpeed(currentCar->speed, weather);
        printf("Rank %d: Car %s completed the race in %d seconds.\n", i + 1, currentCar->GetName(), totalTime);
    }
}

void Circuit::ShowWhoDidNotFinish()
{
    bool anyCarDidNotFinish = false; 

    printf("%s ", "Cars that did not finish the race : ");
    for (int i = 0; i < carsNumber; ++i) {
        Car* currentCar = cars[i];
        int totalTime = lenght / currentCar->AverageSpeed(currentCar->speed, weather);
        if (totalTime > lenght) {
            anyCarDidNotFinish = true;
            printf("Car %s did not finish the race.\n", currentCar->GetName());
        }
    }

    if (!anyCarDidNotFinish) {
        printf("%s ", "All cars finished the race successfully.");
    }
}
