#include "Plane.h"
Plane::Plane(ITravel* Travel)
{
	this->Travel = Travel;
}
Plane::~Plane(void)
{
}
float Plane::cost()
{
	return (5000 + Travel->cost());
}
void Plane::getDescription()
{
	Travel->getDescription();
	cout << " Plane" << endl;
}