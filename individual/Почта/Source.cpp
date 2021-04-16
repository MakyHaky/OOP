#include "Mailing.h"
#include "FirstSubscriber.h"
#include "SecondSubscriber.h"
#include "ThirdSubscriber.h"
#include <iostream>
#include <windows.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Mailing a;
	FirstSubscriber b;
	SecondSubscriber c;
	ThirdSubscriber d;

	a.registerObserver(&b);
	a.registerObserver(&c);
	a.registerObserver(&d);

	a.getNews();

	a.notifyObserver();
	cout << "News for FirstSubscriber" << endl;
	b.display();
	cout << "News for SecondSubscriber" << endl;
	c.display();
	cout << "News for ThirdSubscriber" << endl;
	d.display();

	system("pause");
}