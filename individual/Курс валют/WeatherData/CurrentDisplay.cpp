#include "CurrentDisplay.h"
#include <iostream>
using namespace std;

CurrentDisplay::CurrentDisplay(void)
{
	dollar = 0;
	euro = 0;
	pounds = 0;
}
CurrentDisplay::~CurrentDisplay(void)
{
}
void CurrentDisplay::update(float dollar, float euro, float pounds)
{
	this->dollar = dollar;
	this->euro = euro;
	this->pounds = pounds;
}
void CurrentDisplay::display()
{
	cout << "Current Rate " << endl;
	cout << "--------------------- " << endl;
	cout << "Current Dollar " << dollar << endl;
	cout << "Current Euro " << euro << endl;
	cout << "Current Pounds " << pounds << endl;
	cout << "--------------------- " << endl;
}