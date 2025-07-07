/*
CH-230-A
a12 p1.c
Baisu Stefan Rares
sbaiasu@jacobs-university.de
*/




// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#include <math.h>
using namespace std; 

Shape::Shape(const string& n) : name(n) 
{
}

Shape::Shape(const Shape& c): name(c.name) 
{
    
}

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

CenteredShape::CenteredShape(const CenteredShape& c):Shape(c)
{
	x=c.x;
	y=c.y;
}
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}
RegularPolygon:: RegularPolygon(const RegularPolygon& c): CenteredShape(c)
{
	EdgesNumber=c.EdgesNumber;
}
Circle::Circle(const string& n, double nx, double ny, double r) :  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

//The default constructor:
Hexagon::Hexagon(string& n, double nx, double ny, double side, const string& colour):RegularPolygon(n, nx, ny, 6)
{
    this->side=side;
    this->colour=colour;
}
//The copy constructor:
Hexagon::Hexagon(const Hexagon& c):RegularPolygon(c)
{
    side=c.side;
    colour=c.colour;
}


double Hexagon::getSide() const 
{
    return side;
}

string Hexagon::getColour() const
{
    return colour;
}

void Hexagon::setSide(double side) 
{
    this->side=side;
}
void Hexagon::setColour(string& colour)
{
    this->colour=colour;
}

double Hexagon::perimetru() const
{
    return 6*side;
}
double Hexagon::area() const
{
    return((3*sqrt(3))/2)*(side*side);
}
