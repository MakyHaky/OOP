#include <iostream>
using namespace std;
#include "ExchangeRate.h"
ExchangeRate::ExchangeRate(void)
{
	this->observers = new Observers * [3];
	for (int i = 0; i < 3; i++)
	{
		this->observers[i] = 0;
	}
}
ExchangeRate::~ExchangeRate(void)
{
	delete[]observers;
}
void ExchangeRate::registerObserver(Observers* a)
{
	for (int i = 0; i < 3; i++)
	{
		if (observers[i] == 0)
		{
			observers[i] = a;
			return;
		}
	}
	cout << "No positions for Observer " << endl;
}
void ExchangeRate::removeObserver(Observers* a)
{
	for (int i = 0; i < 3; i++)
	{
		if (observers[i] == a)
		{
			observers[i] = 0;
			return;
		}
	}
	cout << "Observer is not in the list " << endl;
}
void ExchangeRate::notifyObserver()
{
	for (int i = 0; i < 3; i++)
	{
		if (observers[i] != 0)
		{
			observers[i]->update(this->dollar, this->euro, this->pounds);
		}
	}
}
void ExchangeRate::setMeasurements(float dollar, float euro, float pounds)
{
	this->dollar = dollar;
	this->euro = euro;
	this->pounds = pounds;
	this->notifyObserver();
}
void ExchangeRate::getMeasurements()
{
	float dollar, euro, pounds;
	cout << "Dollar= ";
	cin >> dollar;
	cout << "Euro= ";
	cin >> euro;
	cout << "Pounds= ";
	cin >> pounds;
	this->setMeasurements(dollar, euro, pounds);
}