#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;

class Dice
{
public:
	Dice();
	int value;
	void ThrowDice();
	void WriteDice();
	~Dice();
};

