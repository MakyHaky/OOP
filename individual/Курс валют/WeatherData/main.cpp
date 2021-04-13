#include <iostream>
using namespace std;
#include "ExchangeRate.h"
#include "CurrentDisplay.h"
#include "StatisticsDisplay.h"
#include <conio.h>
void main()
{
	ExchangeRate a;
	StatisticsDisplay c;
	CurrentDisplay d;
	a.registerObserver(&c);
	a.registerObserver(&d);
	while (1)
	{
		a.getMeasurements();
		c.display();
		d.display();
	}
	_getch();
}