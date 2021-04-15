#pragma once
#include "IDecorator.h"
class Days14 :
    public IDecorator
{
	ITravel* Travel;
public:
	Days14(ITravel* Travel);
	~Days14(void);
	float cost();
	void getDescription();
};

