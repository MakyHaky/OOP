#pragma once
#include "idecorator.h"
class Luxe :
	public CondimentDecorator
{
	Car* car;
public:
	Luxe(Car* car);
	~Luxe(void);
	float cost();
	void getDescription();
};