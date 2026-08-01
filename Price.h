#pragma once
#include <iostream>
#include <string>

using namespace std;

class Price
{
protected:
	double amount;
public:
	Price() = default;
	Price(double prc) : amount{ prc } {}

	void setPrice(double prc) { amount = prc; }
	void calculatePrice(int endDay, int startDay, int startMonth, int endMonth);
	double getPrice() const { return amount; }
};
