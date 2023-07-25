#include "Vehicle.h"
#include<iostream>
#include<fstream>
using namespace std;
void Vehicle ::setcompanyName(char* n) {

	companyName = deepCopy(n);
};
char* Vehicle :: getcompanyName() {
	char* temp = deepCopy(companyName);
	return temp;
};
void Vehicle:: setcolor(char* c) {

	color = deepCopy(c);
};
char* Vehicle::getcolor() {
	char* temp = deepCopy(color);
	return temp;
}


void Vehicle::setnumberOfWheels(int w) {
	numberOfWheels = w;
};
int Vehicle::getnumberOfWheels() {
	return numberOfWheels;
};
void Vehicle::setpowerCC(int p) {
	powerCC = p;
};
int Vehicle:: getpowerCC() {
	return powerCC;
};
void Vehicle::settypeOfVehicle(char* v) {
	
	typeOfVehicle = deepCopy(v);
};
char* Vehicle:: gettypeOfVehicle() {
	char* temp = deepCopy(typeOfVehicle);
	return temp;
};
Vehicle::Vehicle() {
	companyName = nullptr;
	color = nullptr;
	numberOfWheels = 0;
	powerCC = 0;
	typeOfVehicle = nullptr;

}
Vehicle::Vehicle(char* n, char* c, int w, int p, char* v) {
	companyName = deepCopy(n);
	color = deepCopy(c);
	numberOfWheels = w;
	powerCC = p;
	typeOfVehicle = deepCopy(v);
}
Vehicle::Vehicle(const Vehicle& obj) {
	this->companyName = deepCopy(obj.companyName);
	this->color = deepCopy(obj.color);
	this->numberOfWheels = obj.numberOfWheels;
	this->powerCC = obj.powerCC;
	this->typeOfVehicle = deepCopy(obj.typeOfVehicle);
}

void Vehicle::display()const {
	
	cout << companyName << "......." << color << "......." << numberOfWheels << "......." << powerCC << "......." << typeOfVehicle << "......." << endl;
	
};
