#include "Truck.h"
#include "Vehicle.h"
#include<iostream>
using namespace std;
int Truck::numberOfTrucks = 0;
void Truck:: setcontainerSize(double cs) {
	containerSize = cs;
}
double Truck::getcontainerSize() {
	return containerSize;
}
void Truck::setcategory(char* ch) {
	category = deepCopy(ch);
}
char* Truck::getcategory() {
	char* temp = deepCopy(category);
	return temp;
}
void Truck::setnumberOfTrucks(static int noti) {
	numberOfTrucks = noti;
}
int Truck::getnumberOfTrucks() {
	return numberOfTrucks;
}
Truck::Truck(Truck& obj) {
	this->containerSize = obj.containerSize;
	this->category = deepCopy(obj.category);
	this->numberOfTrucks = obj.numberOfTrucks;
	this->fourWheelDrive = obj.fourWheelDrive;
}
Truck::Truck() {
	containerSize = 0;
	category = nullptr;
	numberOfTrucks ++;
	fourWheelDrive = 0;
}
void Truck::setfourWheelDrive(bool db) {
	fourWheelDrive = db;
};
bool Truck::getfourWheelDrive() {
	return fourWheelDrive;
}
Truck::Truck (double cs, char* ch, int noti, bool db, char* n, char* c, int w, int p, char* v) :Vehicle(n, c, w, p, v) {
	containerSize = cs;
	numberOfTrucks++;
	fourWheelDrive = db;
	category = deepCopy(ch);



};
Truck::~Truck() {

}
void Truck:: display()const {
	string fwd = "/0";
	if (fourWheelDrive == 1)
	{
		fwd = "yes";
	}
	else
	{
		fwd = "no";
	}
	cout << "Company...." << "Color...." << "Wheels...." << "Power...." << "Type...." << endl;
	Vehicle::display();
	cout << "container size" << "...." << "...." << "category" << "...." << "...."<< "four wheels drive"<<endl;
	cout << "..." << containerSize << "............." << category << "......." << "......."<< fwd;
	
};
void Truck::checkType() {
	if (getnumberOfWheels() == 6) {
		char arr[6] = { 'T','r','u','c','k','\0' };
		settypeOfVehicle(arr);

	}
}