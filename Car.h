#pragma once
#include "Vehicle.h"
class Car : public Vehicle
{ 
private: 
	int noOfDoors;
public:
	void drive();
	void stop(); 

	void setNoOfDoors(int n);

	int getNoOfDoors(); 

};

