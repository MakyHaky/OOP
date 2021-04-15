#include "Toyota.h"
#include <iostream>
using namespace std;
Toyota::Toyota()
{
}
Toyota::~Toyota(void)
{
}
float Toyota::cost()
{
	return 33000;
}
void Toyota::getDescription()
{
	cout << "> Toyota" << endl;
}
