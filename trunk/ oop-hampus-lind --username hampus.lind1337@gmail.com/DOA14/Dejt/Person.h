#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "../Forward_List/Forward_List.h"

//using namespace std;

class Person
{
private:
	string namn;
	Forward_List<string>intressen;
public:

	Person()
	{
		namn = "";
	}

	Person(string namn){
		this->namn = namn;
	}

	//Operatoröverlagringar
	bool operator == (Person& right){
		if (namn == right.namn){
			return true;
		}
		else
			return false;
	}

	//printfunktion
	void print(){
		std::cout << this->namn << endl;
		intressen.PrintList();
		std::cout << endl;
	}

	//lägg till intressen
	void AddIntresse(string i)
	{
		intressen.push_front(i);
	}

	//getter-funktion för intresse
	Forward_List<string> getIntresse(){
		return this->intressen;
	}

	~Person()
	{
	}
};

