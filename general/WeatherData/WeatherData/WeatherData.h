#pragma once
#include "subject.h"
#include "Observers.h"
class WeatherData :
	public Subject
{
	float temperature, humidity, pressure;
	Observers** observers;
public:
	WeatherData(void);
	~WeatherData(void);
	void registerObserver(Observers* a);
	void removeObserver(Observers* a);
	void notifyObserver();
	void setMeasurements(float temperature, float humidity, float pressure);
	void getMeasurements();
};

