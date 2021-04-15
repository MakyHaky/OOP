#include <iostream>
using namespace std;
#include "Luxe.h"
Luxe::Luxe(Car* car)
{
	this->car = car;
}
Luxe::~Luxe(void)
{
}
float Luxe::cost()
{
	return (12000 + car->cost());
}
void Luxe::getDescription()
{
	car->getDescription();
	cout << "> Luxe" << endl;
}