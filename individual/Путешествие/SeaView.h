#pragma once
#include "IDecorator.h"
class SeaView :
    public IDecorator
{
	ITravel* Travel;
public:
	SeaView(ITravel* Travel);
	~SeaView(void);
	float cost();
	void getDescription();
};

