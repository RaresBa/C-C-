/*
   CH-230-A
   a12_p6.cpp
   Stefan Baiasu Rares
   sbaiasu@jacobs-university.de
*/


#include <iostream>
#include <cmath>
#include "Circle.h"


using namespace std;


Circle::Circle(const char *n, double a) : Area(n) {
	radius = a;
}

Circle::~Circle() {
}

double Circle::calcArea() const {
	std::cout << "calcArea of Circle...";
	return radius * radius * M_PI;
}

//The perimter I added:
double Circle::calcPerimeter() const
{
	cout<<"calcPerimeter of Circle...";
	return 2*M_PI*radius;
}