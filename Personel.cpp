#include "Personel.h"
#include <iostream>

using namespace std;

void Personel::displayInformation() const
{
	cout << "\nPersonal Information:\n";
	cout << "Name: " << getName() << endl;
	cout << "Surname: " << getSurname() << endl;
	cout << "ID: " << getID() << endl;
}
