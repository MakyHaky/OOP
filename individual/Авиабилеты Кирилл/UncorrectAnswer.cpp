#include "UncorrectAnswer.h"
UncorrectAnswer::UncorrectAnswer(void)
{
}
UncorrectAnswer::~UncorrectAnswer(void)
{
}
void UncorrectAnswer::display()
{
	cout << "\nТаких вариантов нет!" << endl;
	cout << "Выберите из доступных вариантов:1 - Первый, 2 - Бизнес, 3 - Эконом, 4 - Горящие билеты" << endl;
}