#pragma once
#include "subject.h"
#include "Observers.h"
class ExchangeRate :
	public Subject
{
	float dollar, euro, pounds;
	Observers** observers;
public:
	ExchangeRate(void);
	~ExchangeRate(void);
	void registerObserver(Observers* a);
	void removeObserver(Observers* a);
	void notifyObserver();
	void setMeasurements(float dollar, float euro, float pounds);
	void getMeasurements();
};

