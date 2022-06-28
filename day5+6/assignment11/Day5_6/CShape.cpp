#include "CShape.h"

void CShape::setColor(int color)
{
	 this->color = color;
}
int CShape::getColor()
{
	return color;
}

CShape::CShape()
{
	this->color = 0;
}

CShape::CShape(int color)
{
	this->color = color;
}

