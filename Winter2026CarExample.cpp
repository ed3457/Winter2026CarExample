// Winter2026CarExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 
#include "Car.h"
int main()
{
   // define an array that can hold any vehicle, call it: parkingLot
	// add one car to this array. The array size is 5 

	int size = 5; 

	Vehicle** parkingLot = new Vehicle * [size];

	Car* c1 = new Car();

	parkingLot[0] = c1; 

	for (int i = 0; i < 1; i++)
		parkingLot[i]->drive();
}

