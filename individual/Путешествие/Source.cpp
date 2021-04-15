#include <iostream>
#include <conio.h>
#include "IDecorator.h"
#include "ITravel.h"
#include "SaintPetersburg.h"
#include "Czech.h"
#include "Japan.h"
#include "Bus.h"
#include "Plane.h"
#include "Train.h"
#include "Days7.h"
#include "Days14.h"
#include "Days21.h"
#include "ThreeStarhHotel.h"
#include "FourStarHotel.h"
#include "FiveStarHotel.h"
#include "SeaView.h"
#include "GuidedTours.h"
using namespace std;
void main(void)
{
	ITravel* Travel = new SaintPetersburg();
	int select=0;
	cout << "Select your Place \n1.SaintPetersburg 2.Czech 3.Japan" << endl;
	cin >> select;
	switch (select)
	{
	case 1:
		Travel = new SaintPetersburg();
		break;
	case 2:
		Travel = new Czech();
		break;
	case 3:
		Travel = new Japan();
		break; 
	default:
		break;
	}
	cout << "Select your Move \n1.Bus 2.Plane 3.Train" << endl;
	cin >> select;
	switch (select)
	{
	case 1:
		Travel = new Bus(Travel);
		break;
	case 2:
		Travel = new Plane(Travel);
		break;
	case 3:
		Travel = new Train(Travel);
		break;
	default:
		break;
	}
	cout << "How many days \n1.7 2.14 3.21" << endl;
	cin >> select;
	switch (select)
	{
	case 1:
		Travel = new Days7(Travel);
		break;
	case 2:
		Travel = new Days14(Travel);
		break;
	case 3:
		Travel = new Days21(Travel);
		break;
	default:
		break;
	}
	cout << "Do you need window for view on sea? \n1.Yes 2.No" << endl;
	cin >> select;
	switch (select)
	{
	case 1:
		Travel = new SeaView(Travel);
		break;
	case 2:
		break;
	default:
		break;
	}
	cout << "Do you need GuidedTours? \n1.Yes 2.No" << endl;
	cin >> select;
	switch (select)
	{
	case 1:
		Travel = new GuidedTours(Travel);
		break;
	case 2:
		break;
	default:
		break;
	}
	cout << "------------------------------------" << endl;
	Travel->getDescription();
	cout << "rub " << Travel->cost() << endl;
	cout << "------------------------------------" << endl;
	system("pause");
}