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

	//Operator�verlagringar
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

	//l�gg till intressen
	void AddIntresse(string i)
	{
		intressen.push_front(i);
	}

	//getter-funktion f�r intresse
	Forward_List<string> getIntresse(){
		return this->intressen;
	}

	~Person()
	{
	}
};

