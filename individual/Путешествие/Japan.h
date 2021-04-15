#pragma once
#include "ITravel.h"
class Japan :
	public ITravel
{
public:
	Japan();
	~Japan(void);
	float cost();
	void getDescription();
};

