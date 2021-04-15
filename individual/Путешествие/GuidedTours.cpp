#include "GuidedTours.h"
GuidedTours::GuidedTours(ITravel* Travel)
{
	this->Travel = Travel;
}
GuidedTours::~GuidedTours(void)
{
}
float GuidedTours::cost()
{
	return (1500 + Travel->cost());
}
void GuidedTours::getDescription()
{
	Travel->getDescription();
	cout << " GuidedTours" << endl;
}