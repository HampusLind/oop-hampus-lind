#include "Car.h"

Car::Car()
{
	brand = "";
	year = 0;
	price = 0;
}
Car::Car(string b, int y, double p)
{
	this->brand = b;
	this->year = y;
	this->price = p;
}

void Car::WriteToConsole()
{
	cout << "m�rke=" << brand << endl;
	cout << "�rsmodell=" << year << endl;
	cout << "pris=" << price << endl;
}

void Car::ReadFromConsole()
{
	cin >> brand;
	cin >> year;
	cin >> price;
}


Car::~Car()
{
}
