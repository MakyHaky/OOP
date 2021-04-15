#include "Bus.h"
Bus::Bus(ITravel* Travel)
{
	this->Travel = Travel;
}
Bus::~Bus(void)
{
}
float Bus::cost()
{
	return (500 + Travel->cost());
}
void Bus::getDescription()
{
	Travel->getDescription();
	cout << " Bus" << endl;
}