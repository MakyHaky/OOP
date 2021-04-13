#pragma once
#include <iostream>
using namespace std;
#include "IFlyBehavior.h"
#include "IQuackBehavior.h"
class Duck
{
	IFlyBehavior* f1;
	IQuackBehavior* q1;
public:
	void SetFlyBehavior(IFlyBehavior* f)
	{
		this->f1 = f;
	}
	void Fly()
	{
		f1->Fly();
	}
	void SetQuackBehavior(IQuackBehavior* q)
	{
		this->q1 = q;
	}
	void Quack()
	{
		q1->Quack();
	}
	virtual void display() = 0;
};