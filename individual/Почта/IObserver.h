#pragma once
#include <string>
#include <iostream>
using namespace std;
class IObserver
{
public:
	virtual void update() = 0;
};