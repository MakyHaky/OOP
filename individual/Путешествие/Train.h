#pragma once
#include "IDecorator.h"
class Train :
    public IDecorator
{
	ITravel* Travel;
public:
	Train(ITravel* Travel);
	~Train(void);
	float cost();
	void getDescription();
};

