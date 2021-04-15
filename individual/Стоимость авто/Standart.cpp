#include "Standart.h"
#include <iostream>
using namespace std;
Standart::Standart(Car* car)
{
	this->car = car;
}
Standart::~Standart(void)
{
}
float Standart::cost()
{
	return (4500 + car->cost());
}
void Standart::getDescription()
{
	car->getDescription();
	cout << "> Standart" << endl;
}