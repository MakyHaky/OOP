#pragma once
#include "icar.h"
class CondimentDecorator :
	public Car
{
public:
	virtual void getDescription() = 0;
};