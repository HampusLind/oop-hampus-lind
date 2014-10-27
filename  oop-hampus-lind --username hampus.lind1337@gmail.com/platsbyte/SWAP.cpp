#include "SWAP.h"
#include<string>
using namespace std;


SWAP::SWAP()
{

}

void SWAP::SWAPfkn(float *ptr_x, float *ptr_y) {
	float temp;
	temp = *ptr_x;
	*ptr_x = *ptr_y;
	*ptr_y = temp;

}

void SWAP::SWAPfkn(float &x, float &y) {
	float temp;
	temp = x;
	x = y;
	y = temp;
}void SWAP::SWAPfkn(string *ptr_x, string *ptr_y){	string temp;	temp = *ptr_x;	*ptr_x = *ptr_y;	*ptr_y = temp;}

SWAP::~SWAP()
{
}
