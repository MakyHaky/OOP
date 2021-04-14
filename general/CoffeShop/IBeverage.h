#pragma once
class Beverage
{
public:
	virtual void getDescription() = 0;
	virtual float cost() = 0;
};