#include "NoReturn.h"
NoReturn::NoReturn()
{

}
NoReturn::~NoReturn(void)
{
}
void NoReturn::Return()
{
	cout << "\nДанный билет невозможно вернуть при покупке «горящих билетов!!! » ";
	cout << "\n---------------------------------------------------------------" << endl;
}
