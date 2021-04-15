#include "Comfort.h"
#include <iostream>
using namespace std;
Comfort::Comfort(Car* car)
{
	this->car = car;
}
Comfort::~Comfort(void)
{
}
float Comfort::cost()
{
	return (7000 + car->cost());
}
void Comfort::getDescription()
{
	car->getDescription();
	cout << "> Comfort" << endl;
}