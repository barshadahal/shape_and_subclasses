#include <iostream>
#include <sstream>
#include "Circle.h"

using namespace std;

Circle::Circle()
{
    radius=1.0;
}

Circle::Circle(double circleRadius)
{
    radius=circleRadius;
}

Circle::Circle(double circleRadius, string circleColor, bool circleIsfilled): Shape(circleColor, circleIsfilled){
			radius=circleRadius;
		}


void Circle::setRadius(double circleRadius)
{
    radius=circleRadius;
}

double Circle::getRadius()
{
    return radius;
}

double Circle::getArea()
{
    return 3.14*pow(getRadius(), 2) ;
}

double Circle::getPerimeter()
{
    return 2*3.14*getRadius();
}

string Circle::toString()
{
    stringstream rad;
	rad << getRadius();
	return "Circle having radius: " + rad.str() + " is of a subclass of " + Shape::toString();
}




