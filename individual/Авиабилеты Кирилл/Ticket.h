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
	void SetPlace()
	{
		this->f1 = NULL;
	}
	void Choose()
	{
		if (f1 == NULL)
			return;
		f1->Choose();
	}
	void SetReturn(IReturn* q)
	{
		this->q1 = q;
	}
	void SetReturn()
	{
		this->q1 = NULL;
	}
	void Return()
	{
		if (q1 == NULL)
			return;
		q1->Return();
	}

	virtual void display() = 0;
};