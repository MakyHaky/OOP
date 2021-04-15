#include <iostream>
#include <conio.h>
#include "icar.h"
#include "iDecorator.h"
#include "BMW.h"
#include "Toyota.h"
#include "Lexus.h"
#include "Luxe.h"
#include "Standart.h"
#include "Comfort.h"
using namespace std;
void main(void)
{
	
	Car* car1 = new BMW();
	car1 = new Standart(car1);
	cout << "---------------------------------------- " << endl;
	car1->getDescription();
	cout << car1->cost() << " $ " << endl;
	cout << "---------------------------------------- " << endl;

	Car* car2 = new BMW();
	car2 = new Comfort(car2);
	cout << "---------------------------------------- " << endl;
	car2->getDescription();
	cout << car2->cost() << " $ " << endl;
	cout << "---------------------------------------- " << endl;

	Car* car3 = new BMW();
	car3 = new Luxe(car3);
	cout << "---------------------------------------- " << endl;
	car3->getDescription();
	cout << car3->cost() << " $ " << endl;
	cout << "---------------------------------------- " << endl;

	Car* car4 = new Lexus();
	car4 = new Standart(car4);
	cout << "---------------------------------------- " << endl;
	car4->getDescription();
	cout << car4->cost() << " $ " << endl;
	cout << "---------------------------------------- " << endl;

	Car* car5 = new Lexus();
	car5 = new Comfort(car5);
	cout << "---------------------------------------- " << endl;
	car5->getDescription();
	cout << car5->cost() << " $ " << endl;

	Car* car6 = new Lexus();
	car6 = new Luxe(car6);
	cout << "---------------------------------------- " << endl;
	car6->getDescription();
	cout << car6->cost() << " $ " << endl;
	cout << "---------------------------------------- " << endl;

	Car* car7 = new Toyota();
	car7 = new Standart(car7);
	cout << "---------------------------------------- " << endl;
	car7->getDescription();
	cout << car7->cost() << " $ " << endl;
	cout << "---------------------------------------- " << endl;

	Car* car8 = new Toyota();
	car8 = new Comfort(car8);
	cout << "---------------------------------------- " << endl;
	car8->getDescription();
	cout << car8->cost() << " $ " << endl;

	Car* car9 = new Toyota();
	car9 = new Luxe(car9);
	cout << "---------------------------------------- " << endl;
	car9->getDescription();
	cout << car9->cost() << " $ " << endl;
	cout << "---------------------------------------- " << endl;

	system("pause");
}