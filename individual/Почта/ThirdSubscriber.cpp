#include "ThirdSubscriber.h"

ThirdSubscriber::ThirdSubscriber(void)
{
	this->News = new string[5];
	for (int i = 0; i < 5; i++)
	{
		this->News[i] = "";
	}
}

ThirdSubscriber::~ThirdSubscriber(void)
{
	
}

void ThirdSubscriber::update(string* News)
{
	this->News = News;
}

void ThirdSubscriber::display()
{
	cout << "Science News ->" << this->News[3] << endl;
	cout << "Programming News ->" << this->News[2] << endl;
}
