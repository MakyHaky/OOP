#pragma once
#include "ITravel.h"
class Czech :
    public ITravel
{
public:
	Czech();
	~Czech(void);
	float cost();
	void getDescription();
};

