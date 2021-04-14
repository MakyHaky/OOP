#include <iostream>
#include "First.h"
#include "HotTicket.h"
#include "NearWindow.h"
#include "NoWindow.h"
#include "NoReturn.h"
#include "Days_3.h"
#include "Economy.h"
#include "Business.h"
#include "hours_3.h"
#include <conio.h>
#include <locale.h>
#include "UncorrectAnswer.h"
using namespace std;

void main()
{
	setlocale(LC_ALL,"Russian");
	Ticket** di;
	int a;
	int n;
	IPlace* pl_NearWindow, * pl_NoWindow ;
	IReturn* re_hours3, * re_days3, * re_noreturn;

	re_hours3 = new hours_3(); 
	re_days3 = new Days_3(); 
	re_noreturn = new NoReturn();
	pl_NearWindow = new NearWindow();
	pl_NoWindow = new NoWindow();
	cout << "Сколько нужно билетов?" << endl;
	cin >> a;

	di = new Ticket * [a];
	for (int i = 0; i < a; i++)
	{
		cout << "Введите класс места: 1 - Первый, 2 - Бизнес, 3 - Эконом, 4 - Горящие билеты" << endl;
		cin >> n;
		switch (n)
		{
		case 1:
			di[i] = new First();
			di[i]->SetReturn(re_hours3);
			di[i]->SetPlace(pl_NearWindow);
			break;
		case 2:
			di[i] = new Business();
			di[i]->SetReturn(re_days3);
			di[i]->SetPlace(pl_NearWindow);
			break;
		case 3:
			di[i] = new Economy();
			di[i]->SetReturn(re_days3);
			di[i]->SetPlace(pl_NoWindow);
			break;
		case 4:
			di[i] = new HotTicket();
			di[i]->SetReturn(re_noreturn);
			di[i]->SetPlace(pl_NoWindow);
			break;
		default:
			di[i] = new UncorrectAnswer();
			di[i]->SetReturn(re_noreturn);
			di[i]->SetPlace(pl_NoWindow);
			break;
		}
	}
	for (int i = 0; i < a; i++)
	{
		
		di[i]->Choose();
		di[i]->display();
		di[i]->Return();
	}

	for (int i = 0; i < a; i++)
	{
		delete di[i];
	}
	delete[] di;
	delete pl_NearWindow;
	delete pl_NoWindow;
	delete re_hours3;
	delete re_days3;
	delete re_noreturn;

}