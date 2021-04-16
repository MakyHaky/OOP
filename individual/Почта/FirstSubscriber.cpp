#include "FirstSubscriber.h"
FirstSubscriber::FirstSubscriber(void)
{
	this->News = new string[5];
	for (int i = 0; i < 5; i++)
	{
		this->News[i] = "";
	}
}

FirstSubscriber::~FirstSubscriber(void)
{
	;
}

void FirstSubscriber::update(string* News)
{
	this->News = News;
}

void FirstSubscriber::display()
{
	cout << "Economy News ->"<< this->News[1] << endl;
	cout << "Sport News ->" << this->News[4] << endl;
}