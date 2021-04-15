#include "Train.h"
Train::Train(ITravel* Travel)
{
	this->Travel = Travel;
}
Train::~Train(void)
{
}
float Train::cost()
{
	return (2500 + Travel->cost());
}
void Train::getDescription()
{
	Travel->getDescription();
	cout << " Train" << endl;
}