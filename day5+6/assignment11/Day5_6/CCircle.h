#pragma once
#include "CShape.h"

class CCircle : public CShape
{
private:
	int radium;
public:

	void setRadium(int);
	int getRadium();
	CCircle(int, int);
	void draw(int x, int y, HDC device_context);
	 ~ CCircle();
};

