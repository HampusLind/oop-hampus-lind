#include "SWAP.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	SWAP c;
	float x = 0;
	float y = 1;
	string a = "wuzzup";
	string b = "My man";
	cout << " x: " << x << " y: " << y << endl;
	cout << " a: " << a << " b: " << b << endl;
	c.SWAPfkn(&x, &y);
	cout << " x: " << x << " y: " << y << endl;
	c.SWAPfkn(&a, &b);
	cout << " a: " << a << " b: " << b << endl;
	c.SWAPfkn(x, y);
	cout << " x: " << x << " y: " << y << endl;
	system("PAUSE");
	return 0;
}