#include "CLine.h"

void CLine::setLength(int length) {
	this->length = length;
}

int CLine::getLength()
{
	return length;
}
CLine::CLine(int length, int color):CShape(color)
{
	this->length = length;
}

void CLine::draw(int x, int y, HDC device_context)
{

    HPEN pen = CreatePen(PS_SOLID, 5, RGB(255, 0, 0));
    SelectObject(device_context, pen);

    MoveToEx(device_context, x, y, NULL);
    LineTo(device_context, x + length, y);
}