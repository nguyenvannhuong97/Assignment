#include "CSquare.h"

CSquare::CSquare() 
{

}

CSquare::CSquare(int i_width, int i_color)
{
	setWidth(i_width);
	setHeight(i_width);
	setColor(i_color);
}