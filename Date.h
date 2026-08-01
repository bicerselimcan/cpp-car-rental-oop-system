#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Date {
private:
	string modelName;
	vector<pair<string, string>> reservations;

public:
	Date() = default;
	Date(string model) : modelName(model) {}

	void makeReservation(string startDate, string endDate);
	string getModel() const { return modelName; }
	bool isAvailable(string startDate, string endDate) const;
};
