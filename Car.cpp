#include "Car.h"
#include <iostream>
using namespace std;
void Car::drive()
{
	cout << "driving a car!\n";
}

void Car::stop()
{
	cout << "Stop the car!\n";
}

void Car::setNoOfDoors(int n)
{
	noOfDoors = n;
}

int Car::getNoOfDoors()
{
	return noOfDoors;
}
