#include<iostream>
#include "AiroseaMotors.h"
#include "Vehicle.h"
#include "Bike.h"
#include "Car.h"
#include "Truck.h"

using namespace std;
char* deepCopy(const char* cArr)
{

	char* temp = nullptr;
	if (cArr)
	{
		int size = strlen(cArr) + 1;
		temp = new char[size];
		int i = 0;
		
		strcpy_s(temp, size, cArr);
	}
	return temp;
}
int main()
{

	AiroseaMotors motors;
	string choice = "\0";

	int i = 0;

	while (choice != "Q")
	{

		cout << "Enter in accordance to what you seek:";
		cout << "S  Show vehicles list(brief)" << endl;
		cout << "E Create a data file(output file)" << endl;
		cout << "A Add new vehicle" << endl;
		cout << "F Find Vehicle by type" << endl;
		cout << "Q Quit Program" << endl;
		cin >> choice;
		string choice2 = "\0";

		if (choice == "A" || choice == "a")
		{
			while (choice2 != "Q") {
				char* companyname = new char[20];
				char* color = new char[10];
				char* typeofvehicle = new char[10];
				int numberofwheels = 0;
				int power = 0;
				cout << "Press B for Bike" << endl;
				cout << "Press C for Car" << endl;
				cout << "Press T for Truck" << endl;
				cin >> choice2;
				if (choice2 == "B" || choice2 == "b")
				{
					Bike bikeinfo;
					bool selfstart;
					bool discbrake;
					double h;

					Vehicle* obj = &bikeinfo;
					cout << "Add a company name:";
					cin >> companyname;
					bikeinfo.setcompanyName(companyname);
					cout << "Add the number of wheels:";
					cin >> numberofwheels;
					int flag = 0;
					while (flag != 1) {
						if (numberofwheels == 2) {
							bikeinfo.setnumberOfWheels(numberofwheels);
							flag = 1;
						}
						else
						{
							cout << "give a right number of wheels:" << endl;
							cin >> numberofwheels;
						}
					}
					bikeinfo.checkType();



					cout << "Add the color:";
					cin >> color;
					bikeinfo.setcolor(color);

					cout << "Add the powerCC:";
					cin >> power;
					bikeinfo.setpowerCC(power);
					cout << "Is the bike Self Start (Enter 1 for yes and 0 for no):" << endl;


					flag = 0;
					int ss;
					while (flag != 1) {
						cin >> ss;
						{if (ss != 0 && ss != 1)
						{
							cout << "Re-enter the correct input:";

						}
						else
						{

							flag = 1;
						}
						}
					}
					selfstart = ss;
					bikeinfo.setselfStart(selfstart);
					cout << "The height of bike:";
					cin >> h;
					bikeinfo.setheight(h);
					cout << "Is the bike with a discbrake facility?(Press 1 for yes and 0 for no):";
					int dbk = 0;
					flag = 0;
					while (flag != 1)
					{
						cin >> dbk;
						if (dbk != 0 && dbk != 1)
						{
							cout << "Re-enter the correct input:";

						}
						else
						{
							flag = 1;
						}

					}
					discbrake = dbk;
					bikeinfo.setdiscBrake(discbrake);



					motors.addVehilce(obj);

					choice2 = { '\0' };

				}
				else if (choice2 == "C" || choice2 == "c")
				{
					int noofdoors;
					char* trans = new char[10];
					int noofseats;

					Car carinfo;
					Vehicle* obj = &carinfo;
					cout << "Add a company name:";
					cin >> companyname;
					carinfo.setcompanyName(companyname);
					cout << "Add number of wheels:";
					cin >> numberofwheels;
					int flag = 0;
					while (flag != 1) {
						if (numberofwheels == 4) {
							flag = 1;
							carinfo.setnumberOfWheels(numberofwheels);
						}
						else
						{
							cout << "give a right number of wheels:" << endl;
							cin >> numberofwheels;
						}
					}
					carinfo.checkType();
					cout << "Add the color:";
					cin >> color;
					carinfo.setcolor(color);

					cout << "Add the powerCC:";
					cin >> power;
					carinfo.setpowerCC(power);

					cout << "Enter the number of doors:";
					cin >> noofdoors;
					carinfo.setnoOfDoor(noofdoors);
					cout << "Enter the number of seats:";
					cin >> noofseats;
					carinfo.setnoOfSeats(noofseats);
					cout << "Is your car automatic or manual:";
					cin >> trans;
					carinfo.settrasmission(trans);


					motors.addVehilce(obj);
					choice2 = { '\0' };
				}
				else if (choice2 == "T" || choice2 == "t")
				{
					Truck truckinfo;
					double CS;
					char* setcat = new char[10];

					Vehicle* obj = &truckinfo;
					cout << "Add a company name:";
					cin >> companyname;
					cout << "Enter the number of wheels:";
					cin >> numberofwheels;
					truckinfo.setcompanyName(companyname);
					int flag = 0;
					while (flag != 1) {
						if (numberofwheels == 6) {
							truckinfo.setnumberOfWheels(numberofwheels);
							flag = 1;
						}
						else
						{
							cout << "give a right number of wheels:" << endl;
							cin >> numberofwheels;
						}
					}
					truckinfo.checkType();
					cout << "Add the color:";
					cin >> color;
					truckinfo.setcolor(color);

					cout << "Add the powerCC:";
					cin >> power;
					truckinfo.setpowerCC(power);

					cout << "Enter container size:";
					cin >> CS;
					truckinfo.setcontainerSize(CS);
					cout << "Enter the category of truck, a single or a double cabin:";
					cin >> setcat;

					truckinfo.setcategory(setcat);
					cout << "Enter the type of drive this truck is, is it a fourhweel drive(Press 1 for yes and 0 for no?:";
					int fwd = 0;
					flag = 0;
					while (flag != 1)
					{
						cin >> fwd;
						if (fwd != 0 && fwd != 1)
						{
							cout << "Re-enter the correct input:";

						}
						else
						{
							flag = 1;
						}

					}
					truckinfo.setfourWheelDrive(fwd);


					motors.addVehilce(obj);
					choice2 = { '\0' };

				}
				else
				{
					cout << "re-enter the choice:";

				}
			}
		}
		if (choice == "f" || choice == "F")
		{
			char* vehicletypewanted = new char[10];
			cout << "Enter the vehicle type you want to search:";
			cin >> vehicletypewanted;

			motors.searchVehicle(vehicletypewanted);

		}

		if (choice == "e" || choice == "E") {
			char* filename = new char[50];
			cout << "enter a file" << endl;
			cin >> filename;
			motors.saveData(filename);
		}
		if (choice == "s" || choice == "S")
		{

			motors.showvehicles();


		}
	}
	return 0;
	}
	
