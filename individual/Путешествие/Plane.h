#pragma once
#include "IDecorator.h"
class Plane :
    public IDecorator
{
	ITravel* Travel;
public:
	Plane(ITravel* Travel);
	~Plane(void);
	float cost();
	void getDescription();
};

