#pragma once
#include <iostream>
#include <string>

using namespace std;

class Personel {
private:
	string name;
	string surname;
	int id_number;
	int password;
public:
	Personel() = default;
	Personel(string nm, string surnm, int id, int pswrd) : name{ nm }, surname{ surnm }, id_number{ id }, password{ pswrd } {}

	void setName(string Name) { name = Name; }
	string getName() const { return name; }

	void setSurname(string Surname) { surname = Surname; }
	string getSurname() const { return surname; }

	void setID(int id) { id_number = id; }
	int getID() const { return id_number; }
	
	void setPassword(int pswrd) { password = pswrd; }
	int getPassword() const { return password; }

	void displayInformation() const;
};
