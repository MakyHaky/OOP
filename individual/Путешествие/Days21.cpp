#include "Days21.h"
Days21::Days21(ITravel* Travel)
{
	this->Travel = Travel;
}
Days21::~Days21(void)
{
}
float Days21::cost()
{
	return (3000 + Travel->cost());
}
void Days21::getDescription()
{
	Travel->getDescription();
	cout << " Days21" << endl;
}