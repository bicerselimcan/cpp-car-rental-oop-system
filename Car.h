#pragma once
#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class Car : public Vehicle
{
protected:
	string segment;
	string gearType;
	string model;
	string colour;
	string fuelType;
	int numOfSeats;
	int modelYear;
public:
	Car(string brnd, string nm, string sgmnt, string grtyp, string mdl, string clr, string fltyp, int numst, int mdlyr);

	void setSegment(string sgmnt) { segment = sgmnt; }
	void setGearType(string grtyp) { gearType = grtyp; }
	void setModel(string mdl) { model = mdl; }
	void setColour(string clr) { colour = clr; }
	void setFuelType(string fltyp) { fuelType = fltyp; }
	void setNumOfSeats(int nmseats) { numOfSeats = nmseats; }
	void setModelYear(int mdlyr) { modelYear = mdlyr; }

	string getSegment() const { return segment; }
	string getGearType() const { return gearType; }
	string getModel() const { return model; }
    
	void getInformation() const override;
};
