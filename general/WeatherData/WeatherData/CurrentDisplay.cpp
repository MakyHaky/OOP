#include "CurrentDisplay.h"
#include <iostream>
using namespace std;

CurrentDisplay::CurrentDisplay(void)
{
	temperature = 0;
	humidity = 0;
	pressure = 0;
}
CurrentDisplay::~CurrentDisplay(void)
{
}
void CurrentDisplay::update(float temperature, float humidity, float pressure)
{
	this->temperature = temperature;
	this->pressure = pressure;
	this->humidity = humidity;
}
void CurrentDisplay::display()
{
	cout << "Current Temperature " << temperature << endl;
	cout << "Current Humidity " << humidity << endl;
	cout << "Current Pressure " << pressure << endl;
}