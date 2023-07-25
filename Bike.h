#pragma once
#include "Vehicle.h"
char* deepCopy(const char* cArr);
class Bike:public Vehicle
{
	double height; 
	bool selfStart; 
	bool discBrake; 
	static int 	numberOfBikes;//This is to store the number of available bikes
public:
	void setheight(double h);
	double getheight();
	void setselfStart(bool ss);
	bool getselfStart();
	void setdiscBrake(bool dib);
	bool getdiscbrake();
	void setnumberOfBikes(int nob);
	static int  getnumberOfBikes();
	Bike();
	Bike(double h, bool ss, bool dib, int nob, char* n, char* c, int w, int p, char* v) ;
	~Bike();
	Bike(Bike& obj);
	void display()const;
	void checkType();
};

