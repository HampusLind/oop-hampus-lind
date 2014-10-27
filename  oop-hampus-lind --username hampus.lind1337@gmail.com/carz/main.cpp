#include <iostream>
#include <string>
using namespace std;
#include "carz.h"
int main()
{
	carz bil1;
	carz bil2("Volvo", 1999, 9500.5);
	bil2.WriteToConsole();
	bil1.ReadFromConsole();
	bil1.WriteToConsole();
	//etc andra test av klassens metoder, get/set
	return 0;
}