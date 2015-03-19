#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include <mutex>
#include "Console.h"
#include "Player.h"
#include <thread>
using namespace std;
using namespace Course;
class Board
{
public:

	Board()
	{

	}

	void draw(Player player1, Player player2)
	{
		system("cls");
		player1.draw();
		player2.draw();
		for (int i = 0; i < 10; i++)
		{

			Console::gotoxy(10, i);
			cout << "!";
			Console::gotoxy(i, 10);
			cout << "-";
		}
	}

	void spela()
	{
		Player player1;
		Player player2('X', 9, 9, 'u', 'j', 'h', 'k');
		bool gameOver = false;
		thread thread1(player1);
		thread thread2(player2);
		thread1.join();
		thread2.join();
		draw(player1, player2);
		while (!gameOver)
		{
			if (player1.getX() == player2.getX() && player1.getY() == player2.getY())
				gameOver = true;
			if (_kbhit())
			{
				char c;
				c = _getch();

				player1.move(c);
				player2.move(c);

				draw(player1, player2);
			}
		}
	}

	~Board()
	{

	}
};

