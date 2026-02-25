#pragma once
#include <string>
using namespace std; 

class Vehicle
{

private: 
	string brandName;
	string color;

public:
	virtual void drive() = 0; 
	virtual void stop() = 0; 

	void setBrandName(string b);
	string getBrandName();

	void setColor(string c);
	string getColor(); 
};

