/*
   CH-230-A
   a12_p6.cpp
   Stefan Baiasu Rares
   sbaiasu@jacobs-university.de
*/


#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(const char *n, double a, double b) : Area(n) {
    length = a;
    width = b;
}

Rectangle::~Rectangle() {
}

double Rectangle::calcArea() const {
	std::cout << "calcArea of Rectangle...";
	return length*width;
}

double Rectangle::calcPerimter() const
{
    cout<<"calcPerimeter of Rectangle...";
    return 2*(length+width);
}
