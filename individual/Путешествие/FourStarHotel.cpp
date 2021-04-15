#include "FourStarHotel.h"
FourStarHotel::FourStarHotel(ITravel* Travel)
{
	this->Travel = Travel;
}
FourStarHotel::~FourStarHotel(void)
{
}
float FourStarHotel::cost()
{
	return (5000 + Travel->cost());
}
void FourStarHotel::getDescription()
{
	Travel->getDescription();
	cout << " FourStarHotel" << endl;
}