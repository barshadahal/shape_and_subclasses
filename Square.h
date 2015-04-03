#include <string>
#include "Rectangle.h"
using namespace std;


#ifndef SQUARE_H
#define SQUARE_H

class Square: public Rectangle{

	public:

		Square();
		Square(double side);
		Square(double side, string square_color, bool square_filled);
		void setSide(double side);
		double getSide();
		string toString();
};

#endif
