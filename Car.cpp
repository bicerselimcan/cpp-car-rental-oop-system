#include "Car.h"
#include <iostream>
#include <string>

using namespace std;

Car::Car(string brnd, string nm, string sgmnt, string grtyp, string mdl, string clr, string fltyp, int numst, int mdlyr)
	: Vehicle(nm, brnd), segment{sgmnt}, gearType{ grtyp }, model{ mdl }, colour{ clr }, fuelType{ fltyp }, numOfSeats{ numst }, modelYear{ mdlyr }
{
}

void Car::getInformation() const
{
	cout << getBrand() << " " << model 
         << "\nSegment: " << segment 
         << "\nModel year: " << modelYear 
         << "\nGear type: " << gearType 
         << "\nColour: " << colour 
         << "\nFuel type: " << fuelType 
         << "\nNum of seats: " << numOfSeats 
         << "\nType: " << getName() << "\n" << endl;
}
