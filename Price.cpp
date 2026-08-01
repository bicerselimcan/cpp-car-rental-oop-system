#include "Price.h"

using namespace std;

void Price::calculatePrice(int endDay, int startDay, int startMonth, int endMonth)
{
	int totalDays = (endMonth - startMonth) * 30 + (endDay - startDay + 1);
	amount = amount * totalDays;
}
