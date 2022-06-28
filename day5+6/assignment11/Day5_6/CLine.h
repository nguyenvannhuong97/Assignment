#pragma once
//#include <stdio.h>
#include "CShape.h"

class CLine: public CShape
{
private:
	int length;
public:
	void setLength(int);
	int getLength();
	CLine(int length, int color);
	void draw(int x, int y, HDC device_context);
	~CLine();
};

