#include <iostream>
using namespace std;
#include "Espresso.h"
Espresso::Espresso()
{
}
Espresso::~Espresso(void)
{
}
float Espresso::cost()
{
	return 100;
}
void Espresso::getDescription()
{
	cout << " Espresso" << endl;
}
