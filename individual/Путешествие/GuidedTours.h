#pragma once
#include "IDecorator.h"
class GuidedTours :
    public IDecorator
{
	ITravel* Travel;
public:
	GuidedTours(ITravel* Travel);
	~GuidedTours(void);
	float cost();
	void getDescription();
};

