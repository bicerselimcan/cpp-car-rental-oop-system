#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Place.h"

using namespace std;

class City : public Place {
private:
	vector<string> locationNames;
public:
	City(string lctnm1, string lctnm2, string lctnm3);
	void getInformation() const override;
};
