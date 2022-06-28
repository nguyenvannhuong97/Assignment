#pragma once
#include "CRectangle.h"
#include "CShape.h"

class CSquare : public CRectangle
{
public:
	CSquare();
	CSquare(int i_width, int i_color);
	~CSquare();
};

