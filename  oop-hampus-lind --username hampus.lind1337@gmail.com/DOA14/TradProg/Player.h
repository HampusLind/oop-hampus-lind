#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include <chrono>
#include <thread>
#include <atomic>
#include <mutex>
#include <random>
#include <iso646.h>
#include "Console.h"
using namespace std;
using namespace Course;


mutex mutex_position;

class Player
{
private:
	char ch;
	int xkoord, ykoord;
	vector <char> kontroll;
public:

	Player(char ch = 'O', int xkoord = 0, int ykoord = 0, char up = 'w', char down = 's', char left = 'a', char right = 'd')
	{
		this->ch = ch;
		this->xkoord = xkoord;
		this->ykoord = ykoord;
		this->kontroll.push_back(up);
		this->kontroll.push_back(down);
		this->kontroll.push_back(left);
		this->kontroll.push_back(right);
	}

	void move(char ch)
	{
		mutex_position.lock();
		if (ch == this->kontroll[0] && this->ykoord > 0)
			this->ykoord--;
		else if (ch == this->kontroll[1] && this->ykoord < 9)
			this->ykoord++;
		else if (ch == this->kontroll[2] && this->xkoord > 0)
			this->xkoord--;
		else if (ch == this->kontroll[3] && this->xkoord < 9)
			this->xkoord++;
		mutex_position.unlock();
	}

	void operator()()
	{
		
	}

	void draw()
	{
		Console::gotoxy(this->xkoord, this->ykoord);
		cout << this->ch;
	}

	int getX(){ return this->xkoord; }
	int getY(){ return this->ykoord; }
	vector <char> getControls(){ return this->kontroll; }
};

