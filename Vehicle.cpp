#include "Vehicle.h"
#include <string>
#include <iostream>

using namespace std;

Vehicle::Vehicle(string nm, string brnd) : name{ nm }, brand{ brnd }
{
	cout << "A vehicle has been created!" << endl;
}