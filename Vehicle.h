#pragma once
#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
protected:
	string name;
	string brand;
public:
	Vehicle() = default;
	Vehicle(string nm, string brnd);
    
	virtual ~Vehicle() = default; // Virtual destructor for polymorphic cleanup

	void setName(string nm) { name = nm; }
	void setBrand(string brnd) { brand = brnd; }

	string getName() const { return name; }
	string getBrand() const { return brand; }

	virtual void getInformation() const = 0; // Pure virtual function
};
