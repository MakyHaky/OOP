#include "ibeverage.h"
class Espresso :
	public Beverage
{
public:
	Espresso();
	~Espresso(void);
	float cost();
	void getDescription();
};