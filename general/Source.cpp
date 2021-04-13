#include <iostream>
#include "MallardDuck.h"
#include "RubberDuck.h"
#include "FlyWithWings.h"
#include "FlyNoWay.h"
#include "QuackMute.h"
#include "QuackQuack.h"
#include "RedhedDuck.h"
#include "DecoyDuck.h"
#include "QuackSqueak.h"
#include <conio.h>
using namespace std;

void main()
{
	Duck** di;
	int a;
	int n;
	IFlyBehavior* fb_flywithwings, * fb_flynoway;
	IQuackBehavior* qb_quackquack, * qb_mutequack, * qb_squeak;

	qb_quackquack = new QuackQuack();
	qb_mutequack = new QuackMute();
	qb_squeak = new QuackSqueak();
	fb_flywithwings = new FlyWithWings();
	fb_flynoway = new FlyNoWay();
	cout << "How many ducks in the pool?" << endl;
	cin >> a;

	di = new Duck * [a];
	for (int i = 0; i < a; i++)
	{
		cout << "Enter Duck-type: 1 - Mallard, 2 - Redhead, 3 - Rubber, 4 - Decoy" << endl;
		cin >> n;
		switch (n)
		{
		case 1:
			di[i] = new MallardDuck();
			di[i]->SetQuackBehavior(qb_quackquack);
			di[i]->SetFlyBehavior(fb_flywithwings);
			break;
		case 2:
			di[i] = new RedhedDuck();
			di[i]->SetQuackBehavior(qb_quackquack);
			di[i]->SetFlyBehavior(fb_flywithwings);
			break;
		case 3:
			di[i] = new RubberDuck();
			di[i]->SetQuackBehavior(qb_squeak);
			di[i]->SetFlyBehavior(fb_flynoway);
			break;
		case 4:
			di[i] = new DecoyDuck();
			di[i]->SetQuackBehavior(qb_mutequack);
			di[i]->SetFlyBehavior(fb_flynoway);
			break;
		default:
			di[i] = new MallardDuck();
			di[i]->SetQuackBehavior(qb_quackquack);
			di[i]->SetFlyBehavior(fb_flywithwings);
			break;
		}
	}
	for (int i = 0; i < a; i++)
	{
		di[i]->Fly();
		di[i]->Quack();
		di[i]->display();
	}


	for (int i = 0; i < a; i++)
	{
		delete di[i];
	}
	delete[] di;
	delete fb_flywithwings;
	delete fb_flynoway;
	delete qb_quackquack;
	delete qb_mutequack;
	delete qb_squeak;
}