#include<iostream>
#include <string>
#include<cstdlib>
#include"Shape.h"
using namespace std;

Shape :: Shape()
{
    color = "green";
    filled = true;
}

Shape:: Shape(string shape_color, bool shape_Filled)
{
    setColor(shape_color);
    setFilled(shape_Filled);
}

void Shape::setColor(string shape_color)
{
    color=shape_color;
}

string Shape::getColor()
{
    return color;
}

void Shape :: setFilled(bool shape_Filled)
{
    filled= shape_Filled;
}

bool Shape:: isFilled()
{
    return filled;
}

string Shape :: toString()
{
    string fillvalue;
    if (isFilled())
		fillvalue= " its filled";
	else
		fillvalue=" its not filled";

	return "A Shape with color " + getColor() + " and " + fillvalue;
}


