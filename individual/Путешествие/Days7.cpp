#include "Days7.h"
Days7::Days7(ITravel* Travel)
{
	this->Travel = Travel;
}
Days7::~Days7(void)
{
}
float Days7::cost()
{
	return (1000 + Travel->cost());
}
void Days7::getDescription()
{
	Travel->getDescription();
	cout << " Days7" << endl;
}