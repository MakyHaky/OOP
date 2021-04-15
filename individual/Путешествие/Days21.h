#pragma once
#include "IDecorator.h"
class Days21 :
    public IDecorator
{
	ITravel* Travel;
public:
	Days21(ITravel* Travel);
	~Days21(void);
	float cost();
	void getDescription();
};

