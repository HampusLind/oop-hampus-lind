#pragma once
#include <iostream>
#include <mutex>
#include <queue>
#include "Console.h"
#include <conio.h>
#include <thread>
#include <Windows.h>
namespace Thread{
	mutex mutex_q;
	vector<char> kb1, kb2;

	struct position{
		int positionX, positionY;
		int old_PositionX, old_PositionY;
		char playerSign;
	};
	vector<position>thePosition;
	class Game
	{
	private:
		char move;

	public:
		Game()
		{
		}
		void gameBoard()
		{


			if (!(thePosition.empty()))
			{
				position position3 = thePosition.back();
				Course::Console::gotoxy(position3.old_PositionX, position3.old_PositionY);
				cout << " ";
				Course::Console::gotoxy(position3.positionX, position3.positionY);
				cout << position3.playerSign;
				thePosition.pop_back();

				for (int i = 0; i < 11; i++)
				{
					Course::Console::gotoxy(11, i);
					cout << "|";
					Course::Console::gotoxy(i, 11);
					cout << "-";
				}

			}
		}
		//mutex skiten görs här
		void operator()(){
			SetPriorityClass(GetCurrentProcess(), REALTIME_PRIORITY_CLASS);
			SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_TIME_CRITICAL);
			while (true)
			{
				if (_kbhit())
				{
					move = _getch();

					mutex_q.lock();
					if (move == 'w' || move == 'a' || move == 's' || move == 'd')
					{
						kb1.push_back(move);
					}

					if (move == 'i' || move == 'j' || move == 'k' || move == 'l')
					{
						kb2.push_back(move);
					}

					mutex_q.unlock();
				}
				mutex_q.lock();
				gameBoard();
				mutex_q.unlock();
				this_thread::sleep_for(chrono::milliseconds(50));
			}
		}

		
	};
}

