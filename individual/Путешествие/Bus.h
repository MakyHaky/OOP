#pragma once
#include "IDecorator.h"
class Bus :
    public IDecorator
{
	ITravel* Travel;
public:
	Bus(ITravel* Travel);
	~Bus(void);
	float cost(	);
	void getDescription();
};

