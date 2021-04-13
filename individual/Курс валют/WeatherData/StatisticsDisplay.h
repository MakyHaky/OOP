#pragma once
#include <iostream>
#include "observers.h"
#include "DisplayElement.h"
class StatisticsDisplay :
	public Observers, public DisplayElement
{
	int count;
	float average_dollar, average_euro, average_pounds;
	float array_dollar[10];
	float array_euro[10];
	float array_pounds[10];
public:
	StatisticsDisplay(void);
	~StatisticsDisplay(void);
	void update(float dollar, float euro, float pounds);
	void display();
};
