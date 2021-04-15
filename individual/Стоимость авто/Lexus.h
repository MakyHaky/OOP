#pragma once
#include "icar.h"
class Lexus :
	public Car
{
public:
	Lexus();
	~Lexus(void);
	float cost();
	void getDescription();
};