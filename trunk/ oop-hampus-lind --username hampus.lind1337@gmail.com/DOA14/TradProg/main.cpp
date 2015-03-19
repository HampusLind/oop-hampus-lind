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
#include "Board.h"
using namespace std;
using namespace Course;

int main()
{
	Board board;
	board.spela();
	system("PAUSE");
	return 0;
}