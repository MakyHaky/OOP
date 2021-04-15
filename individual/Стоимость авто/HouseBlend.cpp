#include <iostream>
using namespace std;
#include "HouseBlend.h"
HouseBlend::HouseBlend()
{
}
HouseBlend::~HouseBlend(void)
{
}
float HouseBlend::cost()
{
	return 120;
}
void HouseBlend::getDescription()
{
	cout << " HouseBlend" << endl;
}
