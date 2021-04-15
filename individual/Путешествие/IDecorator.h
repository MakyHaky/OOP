#pragma once
#include "ITravel.h"
class IDecorator :
	public ITravel
{
public:
	virtual void getDescription() = 0;
};