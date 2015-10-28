#include "shapes.h"


shapes::shapes(void)
{
}


shapes::~shapes(void)
{
}

int shapes::getXpos()
{

	return shapes::xPos;
}

void shapes::setXpos(int x)
{
	shapes::xPos=x;

}

int shapes::getYpos()
{

	return shapes::yPos;
}

void shapes::setYpos(int y)
{
	shapes::yPos=y;

}
