#include <iostream>
using namespace std;
#include "BMW.h"
BMW::BMW()
{
}
BMW::~BMW(void)
{
}
float BMW::cost()
{
	return 70000;
}
void BMW::getDescription()
{
	cout << "> BMW" << endl;
}
