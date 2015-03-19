#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
#include <mutex>
#include <thread>
#include <chrono>
#include "Console.h"
#include "Game.h"
using namespace std;
using namespace Course;
#pragma once
namespace Thread
{
	class Player
	{
	private:
		char playerSign, c;
		int positionX, positionY;
		vector<char>*vectPointer;

	public:

		Player()
		{
		}

		Player(char playerSign, int positionX, int positionY, vector<char> *vectPointer)
		{
			this->playerSign = playerSign;
			this->positionX = positionX;
			this->positionY = positionY;
			this->vectPointer = vectPointer;

		}

		char getPlayerSign()
		{
			return this->playerSign;
		}
		//mutex skiten görs här!
		void operator()()
		{
			SetPriorityClass(GetCurrentProcess(), REALTIME_PRIORITY_CLASS);
			SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_TIME_CRITICAL);
			while (true)
			{
				mutex_q.lock();
				position position2;
				position2.playerSign = this->playerSign;
				position2.old_PositionX = this->positionX;
				position2.old_PositionY = this->positionY;
				if (!(vectPointer->empty()))
				{
					if (vectPointer->back() == 'w' || vectPointer->back() == 'i')
					{


						if (positionY > 0)
						{
							Console::gotoxy(positionX, positionY);
							cout << " ";
							positionY--;
						}
						else
							;

					}
					else if (vectPointer->back() == 'a' || vectPointer->back() == 'j')
					{
						if (positionX > 0)
						{
							Console::gotoxy(positionX, positionY);
							cout << " ";
							positionX--;
						}
						else
							;
					}
					else if (vectPointer->back() == 's' || vectPointer->back() == 'k')
					{
						if (positionY < 10)
						{
							Console::gotoxy(positionX, positionY);
							cout << " ";
							positionY++;
						}
						else
							;
					}

					else if (vectPointer->back() == 'd' || vectPointer->back() == 'l')
					{
						if (positionX < 10)
						{
							Console::gotoxy(positionX, positionY);
							cout << " ";
							positionX++;
						}
						else
							;
					}

					vectPointer->pop_back();
				}

				position2.positionX = this->positionX;
				position2.positionY = this->positionY;
				thePosition.push_back(position2);
				mutex_q.unlock();
				this_thread::sleep_for(chrono::milliseconds(200));
			}

		}

		
	};
}

