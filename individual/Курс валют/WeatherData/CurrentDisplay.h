#pragma once
#include "Observers.h"
#include "DisplayElement.h"
class CurrentDisplay :
	public Observers, public DisplayElement
{
	float dollar, euro, pounds;
public:
	CurrentDisplay(void);
	~CurrentDisplay(void);
	void update(float dollar, float euro, float pounds);
	void display();
};