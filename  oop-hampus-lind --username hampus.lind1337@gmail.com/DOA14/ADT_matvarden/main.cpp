#include <iostream>
#include "interval.h"

using namespace std;

int main(){
	interval<double> i1(5, 3);
	interval<double> i2(9, 1);
	interval<double> d1 = i2 / i1;
	interval<double> m1 = i1*i2;

	interval<double> i3(6, 3);
	interval<double> i4(9, 5);
	interval<double> d2 = i4 / i3;
	interval<double> m2 = i3*i4;

	interval<double> i5(7, 3);
	interval<double> i6(9, 1);
	interval<double> d3 = i6 / i5;
	interval<double> m3 = i5*i6;

	i1.print_choice();
	d1.print_choice();
	m1.print_choice();
	cout << endl;
	cout << endl;

	i3.print_choice();
	d2.print_choice();
	m2.print_choice();
	cout << endl;
	cout << endl;
	
	i5.print_choice();
	d3.print_choice();
	m3.print_choice();

	system("PAUSE");
	return 0;
}