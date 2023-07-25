#include "Bike.h"
#include "Vehicle.h"

#include<iostream>
using namespace std;
int Bike::numberOfBikes = 0;
void Bike::setheight(double h) {
	height = h;
}
double Bike::getheight() {
	return height;
}
void Bike::setselfStart(bool ss) {
	selfStart = ss;
}
bool Bike:: getselfStart() {
	return selfStart;
}
void Bike::setdiscBrake(bool dib) {
	discBrake = dib;
}
bool Bike::getdiscbrake() {
	return discBrake;
}
void Bike::setnumberOfBikes(static int nob) {
	numberOfBikes = nob;
}
 int Bike::getnumberOfBikes() {
	return numberOfBikes;
}
Bike::Bike() {
	height = 0;
	selfStart = 0;
	discBrake = 0;
	numberOfBikes++;
}
Bike::Bike(Bike& obj) {
	this->height = obj.height;
	this->selfStart = obj.selfStart;
	this->discBrake = obj.discBrake;
	this->numberOfBikes = obj.numberOfBikes;
}
Bike::~Bike() {

}
Bike::Bike(double h, bool ss, bool dib, static int nob, char* n, char* c, int w, int p, char* v) :Vehicle(n, c, w, p, v) {
	height = h;
	selfStart = ss;
	discBrake = dib;
	numberOfBikes++;

};
void Bike::display()const {
	string selfstart = "/0";
	if (selfStart == 1)
	{
		selfstart = "yes";
	}
	else
	{
		selfstart = "no";
	}
	string discbrake = "/0";
	if (discBrake == 1)
	{
		discbrake = "yes";
	}
	else
	{
		discbrake = "no";
	}
	cout << "Company...." << "Color...." << "Wheels...." << "Power...." << "Type...." << endl;
	Vehicle::display();
	cout << "selfstart" << "....." << "discbrake" << "......" << "height" << endl;
	cout << selfstart << "............" << discbrake << "............." << height << endl;
}
void Bike::checkType() {
	if (getnumberOfWheels() == 2) {
		char arr[5] = { 'b','i','k','e','\0' };
		settypeOfVehicle(arr);

	}
}