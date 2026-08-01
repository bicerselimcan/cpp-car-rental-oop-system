#include "Date.h"
#include <iostream>

using namespace std;

void Date::makeReservation(string startDate, string endDate)
{
	if (isAvailable(startDate, endDate)) {
		reservations.push_back({ startDate, endDate });
		cout << "Reservation completed successfully." << endl;
	}
	else {
		cout << "Car is not available for the specified date range." << endl;
	}
}

bool Date::isAvailable(string startDate, string endDate) const
{
	for (const auto& res : reservations) {
		if (startDate <= res.second && endDate >= res.first) {
			return false;
		}
	}
	return true;
}
