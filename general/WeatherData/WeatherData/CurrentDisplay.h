#pragma once
#include "Observers.h"
#include "DisplayElement.h"
class CurrentDisplay :
	public Observers, public DisplayElement
{
	float temperature, humidity, pressure;
public:
	CurrentDisplay(void);
	~CurrentDisplay(void);
	void update(float temperature, float humidity, float pressure);
	void display();
};