#include "ThreeStarhHotel.h"
ThreeStarhHotel::ThreeStarhHotel(ITravel* Travel)
{
	this->Travel = Travel;
}
ThreeStarhHotel::~ThreeStarhHotel(void)
{
}
float ThreeStarhHotel::cost()
{
	return (3000 + Travel->cost());
}
void ThreeStarhHotel::getDescription()
{
	Travel->getDescription();
	cout << " ThreeStarhHotel" << endl;
}