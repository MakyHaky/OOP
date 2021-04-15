#pragma once
#include "IDecorator.h"
class ThreeStarhHotel :
    public IDecorator
{
	ITravel* Travel;
public:
	ThreeStarhHotel(ITravel* Travel);
	~ThreeStarhHotel(void);
	float cost();
	void getDescription();
};

