#include "Days14.h"
Days14::Days14(ITravel* Travel)
{
	this->Travel = Travel;
}
Days14::~Days14(void)
{
}
float Days14::cost()
{
	return (2000 + Travel->cost());
}
void Days14::getDescription()
{
	Travel->getDescription();
	cout << " Days14" << endl;
}