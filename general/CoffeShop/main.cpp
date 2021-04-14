#include <iostream>
#include <conio.h>
#include "iBeverage.h"
#include "iDecorator.h"
#include "Espresso.h"
#include "Milk.h"
using namespace std;
void main(void)
{
	Beverage* beverage = new Espresso();
	beverage = new Milk(beverage);
	beverage->getDescription();
	cout << " rub " << beverage->cost() << endl;
	system("pause");
}