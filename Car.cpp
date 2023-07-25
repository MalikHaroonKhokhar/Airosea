#include "Car.h"
#include "Vehicle.h"
#include "Vehicle.h"
#include<iostream>
using namespace std;
int Car::numberOfCars = 0;
int Car::noOfSeats = 0;

void Car::setnoOfDoor(int nod) {
	noOfDoors = nod;
};
int Car:: getnoOfDoor() {
	return noOfDoors;
}
void Car::settrasmission(char* t) {
	trasmission = deepCopy(t);
}
char* Car::gettrasmission() {
	char *temp = deepCopy(trasmission);
	return temp;
}
void Car::setnoOfSeats(int nos) {
	noOfSeats = nos;
};
int Car::getnoOfSeats() {
	return noOfSeats;
}
void Car:: setnumberOfCars(static int noc) {
	numberOfCars = noc;
};
 int Car::getnumberOfCars() {
	return numberOfCars;
};
Car::Car() {
	noOfDoors = 0;
	trasmission = nullptr;
	noOfSeats ++;
	numberOfCars ++;
}
Car::Car(Car& obj) {
	this->noOfDoors = obj.noOfDoors;
	this->trasmission = deepCopy(obj.trasmission);
	this->noOfSeats = obj.noOfSeats;
	this->numberOfCars = obj.numberOfCars;
};
Car::Car(int nod, char* t, int nos, static int noc, char* n, char* c, int w, int p, char* v) :Vehicle(n, c, w, p, v) {
	noOfDoors++;
	trasmission = deepCopy(t);
	numberOfCars++;
	noOfSeats++;
};
void Car::display()const {
	cout << "Company...." << "Color...." << "Wheels...." << "Power...." << "Type...." << endl;
	Vehicle::display();
	cout << "...." << "Doors" << "...." << "Transmission" << "...." << "Seats" << endl;;
	cout <<"......." << noOfDoors<<"......." << trasmission <<"......." <<noOfSeats << endl;
 
	
};
void Car::checkType() {
	if (getnumberOfWheels() == 4) {
		char arr[4] = { 'c','a','r','\0' };
		settypeOfVehicle(arr);

	}
}