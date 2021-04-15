#pragma once
#include "IDecorator.h"
class FourStarHotel :
    public IDecorator
{
	ITravel* Travel;
public:
	FourStarHotel(ITravel* Travel);
	~FourStarHotel(void);
	float cost();
	void getDescription();
};

