#pragma once
#include "ibeverage.h"
class CondimentDecorator :
	public Beverage
{
public:
	virtual void getDescription() = 0;
};