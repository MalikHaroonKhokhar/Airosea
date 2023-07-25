#pragma once
#include "Vehicle.h"
char* deepCopy(const char* cArr);
class Vehicle
{
	char* companyName;
	char* color;
	int numberOfWheels;
	int powerCC;
	char* typeOfVehicle;
	
public:
	virtual void checkType() {};
	virtual void display()const;
	void setcompanyName(char* n) ;
	char* getcompanyName();
	void setcolor(char* c) ;
	char* getcolor();
		
	
	
	
	void setnumberOfWheels(int w);
	int getnumberOfWheels();
	void setpowerCC(int p);
	int getpowerCC();
	void settypeOfVehicle(char* v);
	char* gettypeOfVehicle();
	Vehicle();
	Vehicle(char* n, char* c, int w, int p, char* v);
	Vehicle(const Vehicle& obj);
	
	

	
};

