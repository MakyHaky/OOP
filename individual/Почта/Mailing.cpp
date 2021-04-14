#include "Mailing.h"

Mailing::Mailing(void)
{
	this->observers = new IObserver * [3];
	for (int i = 0; i < 3; i++)
	{
		this->observers[i] = 0;
	}
}

Mailing::~Mailing(void)
{
	delete[]observers;
}

void Mailing::registerObserver(IObserver* a)
{
	for (int i = 0; i < 3; i++)
	{
		if (observers[i] == 0)
		{
			observers[i] = a;
			return;
		}
	}
	cout << "No positions for Observer " << endl;
}

void Mailing::removeObserver(IObserver* a)
{
	for (int i = 0; i < 3; i++)
	{
		if (observers[i] == a)
		{
			observers[i] = 0;
			return;
		}
	}
	cout << "Observer is not in the list " << endl;
}

void Mailing::notifyObserver()
{
	for (int i = 0; i < 3; i++)
	{
		if (observers[i] != 0)
			observers[i]->update(); 
	}
}
