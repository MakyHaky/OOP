#pragma once
#include "idecorator.h"
	class Comfort :
	public CondimentDecorator
{
	Car* car;
public:
	Comfort(Car* car);
	~Comfort(void);
	float cost();
	void getDescription();
};
