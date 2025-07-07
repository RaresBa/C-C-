/*
   CH-230-A
   a12_p6.cpp
   Stefan Baiasu Rares
   sbaiasu@jacobs-university.de
*/


#include <iostream>
#include <cmath>
#include "Square.h"

using namespace std;


Square::Square(const char *n, double side): Rectangle(n,side,side)
{
	this->side=side;
}

Square::~Square(){
}

//Definition of methods for class square
double Square::calcArea() const 
{
	cout<<"calcArea of Square...";
	return side*side;
}

double Square::calcPerimeter() const
{
	cout<<"calcPerimeter of Square...";
	return 4*side;
}