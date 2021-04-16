#include "SecondSubscriber.h"

SecondSubscriber::SecondSubscriber(void)
{
	this->News = new string[5];
	for (int i = 0; i < 5; i++)
	{
		this->News[i] = "";
	}
}

SecondSubscriber::~SecondSubscriber(void)
{
	
}

void SecondSubscriber::update(string* News)
{
	this->News = News;
}

void SecondSubscriber::display()
{
	cout << "Economy News ->" << this->News[1] << endl;
	cout << "Cultural News ->" << this->News[0] << endl;
}
