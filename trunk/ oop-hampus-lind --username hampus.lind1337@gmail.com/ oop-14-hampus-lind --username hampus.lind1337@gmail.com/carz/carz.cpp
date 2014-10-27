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
	
	//Lägg in den andra konstruktorn som tar parametrar
	void carz::WriteToConsole()
	{
		cout << "Märke=" << brand << endl;
	}



carz::~carz()
{
}
