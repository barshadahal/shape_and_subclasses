#include <string>
#include "Shape.h"

using namespace std;

#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle : public Shape
{
    private:
		double width;
		double length;

    public:

        Rectangle();
        Rectangle(double,double);
        Rectangle(double,double,string,bool);
        void setWidth(double rectWidth);
        double getWidth();
        void setLength(double rectLength);
        double getLength();
        double getArea();
        double getPerimeter();
        string toString();


};

#endif
