#pragma once
#include "IObserver.h"
class IObservable
{
	virtual void registerObserver(IObserver*) = 0;
	virtual void removeObserver(IObserver*) = 0;
	virtual void notifyObserver() = 0;
	virtual void getNews() = 0;
};