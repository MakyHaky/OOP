#pragma once
#include "IDecorator.h"
class Days7 :
    public IDecorator
{
	ITravel* Travel;
public:
	Days7(ITravel* Travel);
	~Days7(void);
	float cost();
	void getDescription();
};

