#include "hr_time.h"
#include <iostream>
using namespace std;

int factorial(int n)
{
	int sum;
	if (n == 1){
		return 1;
	}
	else{
		sum = n*factorial(n - 1);
	}
	return sum;
}

int FactorialIterative(int n){
	int r = n;
	for (int i = n - 1; i > 0; i--)
	{
		r *= i;
	}
	return r;
}

int main(){
	CStopWatch clock;
	clock.startTimer();
	for (int t = 0; t < 1000000; t++)
	{
		FactorialIterative(4);
	}
	clock.stopTimer();
	cout << "Time1 = " << clock.getElapsedTime() * 1000000000 / 1000000 << " nanosekunder" << endl << endl;
	cout << factorial(3) << endl;
	cout << FactorialIterative(3) << endl;
	system("PAUSE");
	return 0;
}