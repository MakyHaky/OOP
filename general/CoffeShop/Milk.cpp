#include <iostream>
using namespace std;
#include "Milk.h"
Milk::Milk(Beverage* beverage)
{
	this->beverage = beverage;
}
Milk::~Milk(void)
{
}
float Milk::cost()
{
	return (20 + beverage->cost());
}
void Milk::getDescription()
{
	beverage->getDescription();
	cout << " Milk" << endl;
}