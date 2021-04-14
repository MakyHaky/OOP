#pragma once
#include "idecorator.h"
class Milk :
	public CondimentDecorator
{
	Beverage* beverage;
public:
	Milk(Beverage* beverage);
	~Milk(void);
	float cost();
	void getDescription();
};