#include "SeaView.h"
SeaView::SeaView(ITravel* Travel)
{
	this->Travel = Travel;
}
SeaView::~SeaView(void)
{
}
float SeaView::cost()
{
	return (600 + Travel->cost());
}
void SeaView::getDescription()
{
	Travel->getDescription();
	cout << " SeaView" << endl;
}