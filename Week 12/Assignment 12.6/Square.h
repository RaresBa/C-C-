/*
   CH-230-A
   a12_p6.cpp
   Stefan Baiasu Rares
   sbaiasu@jacobs-university.de
*/






#ifndef _SQUARE_H
#define _SQUARE_H

#include "Rectangle.h"

class Square :public Rectangle
{
	public:
		Square(const char *n,double side);
		~Square();
		double calcArea() const;
		double calcPerimeter () const;
	private:
		double side;
};
#endif