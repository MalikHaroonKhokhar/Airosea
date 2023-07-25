#include "AiroseaMotors.h"
#include "Vehicle.h"
#include "Car.h"
AiroseaMotors::AiroseaMotors()
{
	index = 0;
	pointerarray = new Vehicle *[index + 1];
}

void AiroseaMotors::addVehilce(Vehicle* obj) {
	pointerarray[index] = obj;

	pointerarray = regrow(pointerarray, ++index);
	
	
}
void AiroseaMotors::searchVehicle(char* a)
{
	cout << pointerarray[0]->gettypeOfVehicle();
	cout << "these are the vehicles of type you searched for with their details:" << endl;
	for (int i = 0; i < index; i++)
	{
		char temp[10] = {};
		int l = strlen(pointerarray[i]->gettypeOfVehicle());
		int m = strlen(a);

		if (l == m)
		{
			pointerarray[i]->display();

		}
		else
		{
			cout << "there are no vehicles currently of this type in showroom" << endl;
		}
	}
}

Vehicle** AiroseaMotors::regrow(Vehicle** pointerarray, int index)
{
	Vehicle** temp = new Vehicle * [index + 1];
	for (int i = 0; i < index + 1; i++)
	{
		temp[i] = pointerarray[i];

	}
	delete[]pointerarray;

	return temp;
}

void AiroseaMotors::showvehicles()
{
	
	for (int i = 0; i < index ; i++)
	{
		pointerarray[i]->display();
		cout << endl;
	}
}

AiroseaMotors::~AiroseaMotors()
{
	/*if(pointerarray!=nullptr)
	{
		delete[]pointerarray;
		pointerarray = nullptr;
	}*/
}
bool AiroseaMotors::saveData(const char* fileName) const
{
	ofstream out;
	out.open(fileName);
	out << "The number of cars:";
	out << Car::getnumberOfCars() << endl;
	out << "The number of bikes:";
	out << Bike::getnumberOfBikes() << endl;
	out << "The number of trucks:";
	out << Truck::getnumberOfTrucks() << endl;
	out << endl << endl;
	out << "Companyname                 type              colour              power(CC)               " << endl;
	out << "------------------------------------------------------------------------------------------" << endl;
	for (int i = 0; i < index; i++)
	{
		out << pointerarray[i]->getcompanyName() << "                             " << pointerarray[i]->gettypeOfVehicle() << "                    " << pointerarray[i]->getcolor() << "                " << pointerarray[i]->getpowerCC() << endl;
	}
	if (out.is_open())
	{
		cout << "Data written..";
		return true;
	}
	else
	{
		cout << "File not edited";
		return false;
	}
}




