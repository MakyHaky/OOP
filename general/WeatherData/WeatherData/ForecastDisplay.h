#pragma once
#include <iostream>
#include "observers.h"
#include "DisplayElement.h"
class ForecastDisplay :
	public Observers, public DisplayElement
{
	float forecast_temperature, forecast_humidity, forecast_pressure;
public:
	ForecastDisplay(void);
	~ForecastDisplay(void);
	void update(float temperature, float humidity, float pressure);
	void display();
};