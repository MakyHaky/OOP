#pragma once
#include "IDecorator.h"
class FiveStarHotel :
    public IDecorator
{
	ITravel* Travel;
public:
	FiveStarHotel(ITravel* Travel);
	~FiveStarHotel(void);
	float cost();
	void getDescription();
};

