#include "CCircle.h"

CCircle::CCircle(int radium, int color):CShape(color)
{
    this->radium = 0;
}

void CCircle::setRadium(int radium)
{
	this->radium = radium;
}

int CCircle::getRadium()
{
	return radium;
}

void CCircle::draw(int x, int y, HDC device_context)
{
    HPEN pen = CreatePen(PS_SOLID, 4, RGB(200, 12, 212));
    SelectObject(device_context, pen);

    Ellipse(device_context, x, y, x + 2 * radium, y + 2 * radium);
}
