#include <iostream>
#include <thread>
#include "Console.h"
#include "Player.h"
#include "Game.h"
int main()
{
	//trådar och skit ligger här!
	Thread::Game theGame;
	Thread::Player player1('1', 0, 0, &Thread::kb1);
	Thread::Player player2('2', 5, 5, &Thread::kb2);
	thread thread0(theGame);
	thread thread1(player1);
	thread thread2(player2);
	thread0.join();
	thread1.join();
	thread2.join();
	system("PAUSE");
	return 0;
}