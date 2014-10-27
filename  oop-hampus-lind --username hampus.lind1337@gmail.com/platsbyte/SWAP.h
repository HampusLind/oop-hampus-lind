#pragma once
#include<string>
using namespace std;
class SWAP
{
private:
public:
	SWAP();
	void SWAPfkn(float *ptr_x, float *ptr_y);
	void SWAPfkn(float &x, float &y);
	void SWAPfkn(string *ptr_x, string *ptr_y);
	~SWAP();
};

