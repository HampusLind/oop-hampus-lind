#include "carz.h"


carz::carz()
{
	brand = "";
	year = 0;
	price = 0;
}
carz::carz()
{

}
	
	//L�gg in den andra konstruktorn som tar parametrar
	void carz::WriteToConsole()
	{
		cout << "M�rke=" << brand << endl;
	}



carz::~carz()
{
}
