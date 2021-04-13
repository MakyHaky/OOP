#include "StatisticsDisplay.h"
using namespace std;
StatisticsDisplay::StatisticsDisplay(void)
{
	count = 1;
	for (int i = 0; i < 10; i++)
	{
		array_dollar[i] = 0;
		array_euro[i] = 0;
		array_pounds[i] = 0;
	}
}
StatisticsDisplay::~StatisticsDisplay(void)
{
}
void StatisticsDisplay::display()
{
	cout << "\nAverage Rate " << endl;
	cout << "--------------------- " << endl;
	cout << "Average Dollar: " << average_dollar << endl;
	cout << "Average Euro: " << average_euro << endl;
	cout << "Average Pounds: " << average_pounds << endl;
	cout << "--------------------- " << endl;
}
void StatisticsDisplay::update(float dollar, float euro, float pounds)
{	
	for (int j = 8; j >= 0; j--)
	{
		array_dollar[j + 1] = array_dollar[j];
		array_euro[j + 1] = array_euro[j];
		array_pounds[j + 1] = array_pounds[j];
	}
	array_dollar[0] = dollar;
	array_euro[0] = euro;
	array_pounds[0] = pounds;
	float sum_dollar = 0;
	float sum_euro = 0;
	float sum_pounds = 0;
	for (int i = 0; i < 7; i++)
	{
		sum_dollar += array_dollar[i];
		sum_euro += array_euro[i];
		sum_pounds += array_pounds[i];
	}
	average_dollar = sum_dollar / count;
	average_euro = sum_euro / count;
	average_pounds = sum_pounds / count;
	count++;
}