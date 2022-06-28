#pragma once
#include <Windows.h>
#include <iostream>
#include <cstdlib>
using namespace std;

class CShape
{
private:
	int color;
public:
	void setColor(int color);
	int getColor();
	CShape();
	CShape(int color);
	virtual void draw(int x, int y, HDC geometry) = 0; // x, y are the coordinates to draw the figure, passed in when calling the function.
	~CShape();
};

