#include "Mailing.h"
#include "Cultural.h"
#include "Economy.h"
#include "Programming.h"
#include "Science.h"
#include "Sport.h"
#include <conio.h>
#include <iostream>
using namespace std;
void main()
{
	Mailing first,second, third;
	Cultural b;
	Economy c;
	Programming d;
	Science e;
	Sport f;
	first.registerObserver(&c);
	first.registerObserver(&f);

	second.registerObserver(&c);
	second.registerObserver(&b);

	third.registerObserver(&e);
	third.registerObserver(&d);
	cout << "First subscriber received ->" << endl;
	first.notifyObserver();

	cout << "second subscriber received ->" << endl;
	second.notifyObserver();

	cout << "third subscriber received ->" << endl;
	third.notifyObserver();

	_getch();
}