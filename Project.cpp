#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include "City.h"
#include "Place.h"
#include "Vehicle.h"
#include "Car.h"
#include "Price.h"
#include "Date.h"
#include "Personel.h"

using namespace std;

int main()
{
	string startDate, endDate, tempS1_day, tempS1_month, tempS2_day, tempS2_month, username, tempBrand, tempName, tempSegment, tempGtype, tempModel, tempColour, tempFType;
	int selection, citySelection, continueChoice, startDay, endDay, startMonth, endMonth, password, tempNSeat, tempMYear, priceVal, entry;

	vector<Personel> personels;
	vector<City> locations;
	vector<Price> prc;
	vector<Date> models;
	vector<Car> cars;

	personels.push_back(Personel("Berfin", "Sahin", 202238029, 12345));

	cars.push_back(Car("Audi", "Sedan", "Comfort", "Automatic", "A3", "White", "Diesel", 4, 2018));
	prc.push_back(Price(600));
	cars.push_back(Car("BMW", "Sedan", "Sport", "Automatic", "M3", "Black", "Gasoline", 2, 2023));
	prc.push_back(Price(5000));
	cars.push_back(Car("Mazda", "Coupe", "Sport", "Manual", "Miata", "Violet", "Gasoline", 2, 1990));
	prc.push_back(Price(3600));
	cars.push_back(Car("Mercedes", "Coupe", "Sport", "Automatic", "SLS", "Purple", "Gasoline", 2, 1990));
	prc.push_back(Price(3000));
	cars.push_back(Car("Skoda", "SUV", "Comfort", "Automatic", "Kodiaq", "Grey", "Diesel", 5, 2019));
	prc.push_back(Price(2200));
	cars.push_back(Car("Toyota", "Sedan", "Economy", "Automatic", "Corolla", "Silver", "Gasoline", 4, 2022));
	prc.push_back(Price(2500));
	cars.push_back(Car("Honda", "SUV", "Compact", "Automatic", "CR-V", "Blue", "Gasoline", 4, 2021));
	prc.push_back(Price(3500));
	cars.push_back(Car("Ford", "Hatchback", "Urban", "Automatic", "Focus", "Red", "Gasoline", 5, 2019));
	prc.push_back(Price(2800));
	cars.push_back(Car("Chevrolet", "SUV", "Midsize", "Automatic", "Equinox", "Black", "Gasoline", 5, 2020));
	prc.push_back(Price(3200));
	cars.push_back(Car("Volkswagen", "Sedan", "Luxury", "Automatic", "Passat", "White", "Diesel", 4, 2023));
	prc.push_back(Price(3800));
	cars.push_back(Car("Hyundai", "Hatchback", "Sport", "Automatic", "Veloster", "Yellow", "Gasoline", 3, 2021));
	prc.push_back(Price(2700));
	cars.push_back(Car("Nissan", "Sedan", "Economy", "Automatic", "Altima", "Gray", "Gasoline", 4, 2022));
	prc.push_back(Price(2600));
	cars.push_back(Car("Kia", "SUV", "Midsize", "Automatic", "Sorento", "Green", "Gasoline", 5, 2020));
	prc.push_back(Price(3300));
	cars.push_back(Car("BMW", "Coupe", "Luxury", "Automatic", "4 Series", "Silver", "Gasoline", 2, 2023));
	prc.push_back(Price(4000));

	vector<string> placeNames = {"Ankara", "Istanbul", "Samsun", "Izmir", "Antalya", "Bursa", "Mugla"};

	locations.push_back(City("Esenboga Airport", "Asti Bus Terminal", "Ankara Train Station"));
	locations.push_back(City("Sabiha Gokcen Airport", "Istanbul Airport", "Taksim"));
	locations.push_back(City("Carsamba Airport", "Cumhuriyet Square", ""));
	locations.push_back(City("Adnan Menderes Airport", "Izmir Bus Terminal", ""));
	locations.push_back(City("Antalya Airport", "Antalya Bus Terminal", ""));
	locations.push_back(City("Yenisehir Airport", "", ""));
	locations.push_back(City("Milas-Bodrum Airport", "", ""));

	for (size_t i = 0; i < cars.size(); i++)
	{
		models.push_back(Date(cars[i].getBrand() + " " + cars[i].getModel()));
	}

	cout << "Welcome to the Car Rental Management System\n";
	cout << "1. Personnel Login\n2. Customer Portal\nSelection: ";
	cin >> entry;

	if (entry == 1)
	{
		bool loggedIn = false;
		do {
			cout << "Enter Username: ";
			cin >> username;
			cout << "Enter Password: ";
			cin >> password;

			for (size_t a = 0; a < personels.size(); a++)
			{
				if (username == personels[a].getName() && password == personels[a].getPassword()) {
					loggedIn = true;
					break;
				}
			}
			if (!loggedIn) {
				cout << "Incorrect username or password. Try again.\n";
			}
		} while (!loggedIn);

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Login successful!\n";

		cout << "Enter the brand name: ";
		getline(cin, tempBrand);
		cout << "Enter the segment: ";
		getline(cin, tempName);
		cout << "Enter the class: ";
		getline(cin, tempSegment);
		cout << "Enter the gear type: ";
		getline(cin, tempGtype);
		cout << "Enter the model: ";
		getline(cin, tempModel);
		cout << "Enter the color: ";
		getline(cin, tempColour);
		cout << "Enter the fuel type: ";
		getline(cin, tempFType);
		cout << "Enter the number of seats: ";
		cin >> tempNSeat;
		cout << "Enter the model year: ";
		cin >> tempMYear;
		cout << "Enter the price: ";
		cin >> priceVal;
        
		cars.push_back(Car(tempBrand, tempName, tempSegment, tempGtype, tempModel, tempColour, tempFType, tempNSeat, tempMYear));
		prc.push_back(Price(priceVal));
		models.push_back(Date(tempBrand + " " + tempModel));
	}

	while (true)
	{
		cout << "\nStart Date (yyyy-mm-dd): ";
		cin >> startDate;

		cout << "End Date (yyyy-mm-dd): ";
		cin >> endDate;

		cout << "\nCities we serve:\n";
		for (size_t n = 0; n < placeNames.size(); n++)
		{
			cout << (n + 1) << ". " << placeNames[n] << endl;
		}

		cout << "Please select a city (1-" << placeNames.size() << "): ";
		cin >> citySelection;
        
		if (citySelection > 0 && static_cast<size_t>(citySelection) <= locations.size()) {
			locations[citySelection - 1].getInformation();
		}

		cout << "\nAvailable Cars:\n";

		for (size_t i = 0; i < models.size(); ++i)
		{
			if (models[i].isAvailable(startDate, endDate))
			{
				cout << i + 1 << ". " << models[i].getModel() << endl;
			}
		}

		cout << "Please select a car (1-" << models.size() << "): ";
		cin >> selection;
		--selection;

		if (selection < 0 || static_cast<size_t>(selection) >= models.size())
		{
			cout << "Invalid car selection." << endl;
			return 1;
		}

		models[selection].makeReservation(startDate, endDate);

		if (startDate.length() >= 10 && endDate.length() >= 10) {
			tempS1_day = startDate.substr(8, 2);
			startDay = stoi(tempS1_day);
			tempS1_month = startDate.substr(5, 2);
			startMonth = stoi(tempS1_month);

			tempS2_day = endDate.substr(8, 2);
			endDay = stoi(tempS2_day);
			tempS2_month = endDate.substr(5, 2);		
			endMonth = stoi(tempS2_month);

			prc[selection].calculatePrice(endDay, startDay, startMonth, endMonth);
			cout << "The total price for this rental is: $" << prc[selection].getPrice() << endl;
		}

		cout << "\nDo you want to continue? (Yes: 1, No: 0): ";
		cin >> continueChoice;

		if (continueChoice != 1)
		{
			break;
		}
	}
    
	return 0;
}
