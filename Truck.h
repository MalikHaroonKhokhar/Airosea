#pragma once
#include "Vehicle.h"
char* deepCopy(const char* cArr);
class Truck:public Vehicle

{
	 double containerSize;
	 char* category;
	  bool fourWheelDrive;
	 
	 static int  numberOfTrucks; //This is to store the number of available trucks
public:
	void setcontainerSize(double cs) ;
	double getcontainerSize() ;
	void setcategory(char* ch);
	char* getcategory();
	
	void setnumberOfTrucks( int noti);
	void setfourWheelDrive(bool db);
	bool getfourWheelDrive();
	 static int getnumberOfTrucks();
	Truck(Truck& obj);
	Truck();
	~Truck();
	Truck(double cs, char* ch, int noti, bool db, char* n, char* c, int w, int p, char* v) ;
	void display()const;
	void checkType();
};

