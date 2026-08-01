#include "City.h"
#include <iostream>

using namespace std;

City::City(string lctnm1, string lctnm2, string lctnm3)
{
	if (!lctnm1.empty()) locationNames.push_back(lctnm1);
	if (!lctnm2.empty()) locationNames.push_back(lctnm2);
	if (!lctnm3.empty()) locationNames.push_back(lctnm3);
}

void City::getInformation() const
{
	cout << "Locations: ";
	for (size_t i = 0; i < locationNames.size(); i++)
	{
		cout << endl << "- " << locationNames[i];
	}
	cout << endl;
}
