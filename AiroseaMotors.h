#pragma once
#include "Vehicle.h"
#include "Car.h"
#include "Bike.h"
#include "Truck.h"
#include<iostream>
#include<fstream>
using namespace std;
char* deepCopy(const char* cArr);
class AiroseaMotors
{
	
	int index;
	Vehicle** pointerarray;
	
	
public:
	AiroseaMotors();
	void addVehilce(Vehicle* obj);
	void searchVehicle(char* a);
	Vehicle** regrow(Vehicle** pointerarray, int index);
	void showvehicles();
	~AiroseaMotors();
	bool saveData(const char* fileName) const;
	
	
};

