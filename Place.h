#pragma once
#include <iostream>
#include <string>

using namespace std;

class Place {
protected:
	string cityName;
public:
	Place() = default;
	Place(string name) : cityName(name) {}
	virtual ~Place() = default;

	void setCityName(string ctnm) { cityName = ctnm; }
	string getCityName() const { return cityName; }
    
	virtual void getInformation() const = 0;
};
