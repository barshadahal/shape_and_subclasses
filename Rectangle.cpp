#include <iostream>
#include<sstream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle()
{
    width=1.0;
    length=1.0;
}

Rectangle::Rectangle(double rect_Width, double rect_Length)
{
    setWidth(rect_Width);
    setLength(rect_Length);
}

Rectangle::Rectangle(double rect_Width, double rect_Length, string, bool)
{
    setWidth(rect_Width);
    setLength(rect_Length);
}

void Rectangle::setWidth(double rect_Width)
{
    width=rect_Width;
}

double Rectangle::getWidth()
{
    return width;
}

void Rectangle::setLength(double rect_Length)
{
    length=rect_Length;
}

double Rectangle::getLength()
{
   return length;
}

double Rectangle::getArea()
{
    return getWidth()*getLength();
}

double Rectangle::getPerimeter()
{
    return 2*(getWidth()+getLength());
}

string Rectangle::toString()
{
    stringstream length, width;
	length << getLength();
	width << getWidth();
	return "A Rectangle having width: " + width.str() + " and length: " + length.str() + " is a subclass of " + Shape::toString();
}



