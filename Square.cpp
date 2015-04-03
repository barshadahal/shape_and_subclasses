
#include <iostream>
#include "Shape.h"
#include "Square.h"

using namespace std;

Square::Square():Rectangle()
{

}

Square::Square(double side): Rectangle(side, side){
{
    setSide(side);
}

Square::Square(double side, string squareColor, bool squareFilled): Rectangle(side, side, squareColor, squareFilled)
{
    setSide(side);
}

void Square::setSide(double side)
{
    Rectangle::setLength(side);
}

double Square::getSide()
{
    return Rectangle::getLength();
}

void Square::setWidth(double)
{
    setSide(side);
}

void Square::setLength(double)
{
    setSide(side);
}

string Square::toString()
{
    stringstream side, area, perimeter;
	side << getSide();
	area << getArea();
	perimeter << getPerimeter();

	return "A Square having side: " + side.str()+ " is a subclass of " + Rectangle::toString();
}


