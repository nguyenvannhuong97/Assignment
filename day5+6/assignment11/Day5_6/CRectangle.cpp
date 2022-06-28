#include "CRectangle.h"

void CRectangle::setWidth(int wight)
{
	this->width = width;
}
int CRectangle::getWidth()
{
	return width;
}
void CRectangle::setHeight(int height)
{
	this -> height = height;
}
int CRectangle::getHeight()
{
	return height;
}
CRectangle::CRectangle(int color, int width, int height):CShape(color)
{
	this->width = width;
	this->height = height;
}

void CRectangle::draw(int x, int y, HDC device_context)
{
	HPEN pen = CreatePen(PS_SOLID, 4, RGB(150, 42, 100));
	SelectObject(device_context, pen);

	Rectangle(device_context, x, y, x + width, y + height);
}