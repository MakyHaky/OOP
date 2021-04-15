#pragma once
#include <iostream>
using namespace std;
class ITravel
{
public:
	virtual void getDescription() = 0;
	virtual float cost() = 0;
};