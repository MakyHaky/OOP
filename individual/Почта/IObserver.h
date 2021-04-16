#pragma once
#include <string>
#include <iostream>
using namespace std;
class IObserver
{
public:
	virtual void update(string* News) = 0;
};