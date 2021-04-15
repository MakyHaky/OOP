#pragma once
#include "idecorator.h"
class Standart :
	public CondimentDecorator
{
	Car* car;
public:
	Standart(Car* car);
	~Standart(void);
	float cost();
	void getDescription();
};
