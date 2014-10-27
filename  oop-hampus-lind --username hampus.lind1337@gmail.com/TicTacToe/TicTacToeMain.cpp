#include<iostream>
#include "TicTacToe.h"
#include "Console.h"
#include <conio.h>

using namespace Course;

int main(){
	char c = NULL;
	TicTacToe b;
	b.RitaPlan();
	while (1)
	{


		if (c == 'w' || c == 'a' || c == 's' || c == 'd' || c == '\r' || c == NULL) //w-a-s-d och enter kontrollerar spelet 
		//försökte använda piltangenterna men det var skitjobbigt i c++
		{
			b.SpelarTur(c);
			b.RitaPlan();
			b.SpelStatus();
			b.FlyttaMark(c);

			c = _getch();
		}
		else
			break;

	}
	Console::gotoxy(0, 10);
	system("Pause");
	return 0;
}