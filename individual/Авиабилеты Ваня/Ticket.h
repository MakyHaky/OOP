#pragma once
#include <iostream>
using namespace std;
#include "IPlace.h"
#include "IReturn.h"
class Ticket
{
	IPlace* f1;
	IReturn* q1;
public:
	void SetPlace(IPlace* f)
	{
		this->f1 = f;
	}
	void Choose()
	{
		f1->Choose();
	}
	void SetReturn(IReturn* q)
	{
		this->q1 = q;
	}
	void Return()
	{
		q1->Return();
	}
	virtual void display() = 0;
};