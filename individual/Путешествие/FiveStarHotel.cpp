#include "FiveStarHotel.h"
FiveStarHotel::FiveStarHotel(ITravel* Travel)
{
	this->Travel = Travel;
}
FiveStarHotel::~FiveStarHotel(void)
{
}
float FiveStarHotel::cost()
{
	return (8000 + Travel->cost());
}
void FiveStarHotel::getDescription()
{
	Travel->getDescription();
	cout << " FiveStarHotel" << endl;
}