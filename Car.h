#pragma once
#include "Vehicle.h"
char* deepCopy(const char* cArr);
class Car:public Vehicle
{
	int noOfDoors; 
	char* trasmission;
	static int noOfSeats; 
  static int numberOfCars;//This is to store the number of available cars
public:
	void setnoOfDoor(int nod);
	int getnoOfDoor();
	void settrasmission(char* t);
	char* gettrasmission();
	void setnoOfSeats(int nos);
	int getnoOfSeats();
	void setnumberOfCars(int noc);
	static int getnumberOfCars();
	Car(int nod, char* t, int nos,  int noc,char* n, char* c, int w, int p, char* v) ;
	Car();
	
	Car(Car& obj);
	void display()const;
	void checkType();
};

