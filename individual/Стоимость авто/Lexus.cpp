#include "Lexus.h"
#include <iostream>
using namespace std;
Lexus::Lexus()
{
}
Lexus::~Lexus(void)
{
}
float Lexus::cost()
{
	return 81000;
}
void Lexus::getDescription()
{
	cout << "> Lexus" << endl;
}
