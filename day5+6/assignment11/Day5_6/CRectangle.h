#pragma once
#include "CShape.h"

class CRectangle: public CShape
{
private:
	int width;
	int height;
public:
	void setWidth(int);
	int getWidth();
	void setHeight(int);
	int getHeight();
	CRectangle(int color, int wight, int height);
	void draw(int x, int y, HDC device_context);
	~CRectangle();
};

