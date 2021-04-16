#include "Mailing.h"

Mailing::Mailing(void)
{
	this->observers = new IObserver * [3];
	for (int i = 0; i < 3; i++)
	{
		this->observers[i] = 0;
	}
	this->News = new string [5];
	for (int i = 0; i < 5; i++)
	{
		this->News[i] = "";
	}
}

Mailing::~Mailing(void)
{
	delete[]observers;
	delete[]News;
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
			observers[i]->update(this->News); 
	}
}

void Mailing::getNews()
{
	cout << "Write your News!" << endl;
	cout << "Write your Cultural News!" << endl;
	getline(cin,this->News[0]);
	cout << "Write your Economy News!" << endl;
	getline(cin, this->News[1]);
	cout << "Write your Programming News!" << endl;
	getline(cin, this->News[2]);
	cout << "Write your Science News!" << endl;
	getline(cin, this->News[3]);
	cout << "Write your Sport News!" << endl;
	getline(cin, this->News[4]);

}
