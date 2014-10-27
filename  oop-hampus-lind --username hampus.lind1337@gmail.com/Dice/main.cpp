#include <conio.h>
#include <iostream>
#include <cstdlib>
#include "Console.h"
#include "Dice.h"
using namespace std;
using namespace Course; //tack till jocke för tipset

int main(){
	char c;
	Dice tarning1;
	Dice tarning2;
	while (1)
	{
		if (_kbhit())
		{
			c = _getch();

			if (c == '\r') // '\r' = Enter
			{
				Console::clrscr();
				tarning1.ThrowDice();
				tarning2.ThrowDice();
				tarning1.WriteDice();
				tarning2.WriteDice();

			}
			else
				break;
		}
	}
	return 0;
}