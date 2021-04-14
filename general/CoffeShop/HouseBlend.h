#include "ibeverage.h"
class HouseBlend :
	public Beverage
{
public:
	HouseBlend();
	~HouseBlend(void);
	float cost();
	void getDescription();
};