#pragma once
#include "ITravel.h"
class SaintPetersburg :
    public ITravel
{
public:
	SaintPetersburg();
	~SaintPetersburg(void);
	float cost();
	void getDescription();
};

