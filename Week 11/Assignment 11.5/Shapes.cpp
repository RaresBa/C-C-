/*
   CH-230-A
   a11_p5.cpp
   Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/






// please refer to shapes.h for methods documentation
#include <cmath>
#include <iostream>
#include "Shapes.h"

using namespace std; 

//I will take every object

//First for the shape

Shape::Shape(const string& n):name(n)
{

}
Shape::Shape()
{
	name=""; 
}
//The copy constructor for shape:
Shape::Shape(Const Shape& copy)
{
	name=copy.name;
}
//The print method for shape:
void Shape::printName()
{
	cout<<name<<endl;
}
//The setter for shape:
void Shape::setName(const string& name2)
{
	name=name2;
}
//The getter for shape:
void Shape::getName()
{
	return name;
}



//Second the Centered Shape:
CenteredShape::CenteredShape(const string& n, double x2, double y2):Shape(n)
{
	x=x2;
	y=y2;
}
CenteredShape::CenteredShape()
{
	x=0;
	y=0;
}
//The copy for the Centered Shape:
CenteredShape::CenteredShape(const CenteredShape& cpy):Shape(cpy.getName())
{
	x=cpy.x;
	y=cpy.y;
}

//The setter for the centered shape:
void CenteredShape::setX(double x2)
{
	x=x2;
}
void CenteredShape::setY(double y2)
{
	y=y2;
}

//The getter for the centered shape:
void CenteredShape::getX() const;
{
	return x;
}
void CenteredShape::getY() const;
{
	return y;
}



//Third implementation for the RegularPolygon:
RegularPolygon::RegularPolygon(const string& n, double x2, double x3, double x4):CenteredShape(n,x2,x3)
{
	EdgesNumber=x4;
}
RegularPolygon::RegularPolygon()
{
	EdgesNumber=0;
}
//The copy constructor for the regularpolygon:
RegularPolygon::RegularPolygon(const RegularPolygon& copy):CenteredShape(copy.getName(),copy.getX(),copy.getY())
{
	EdgesNumber=copy.EdgesNumber;
}
//The setter for the regularpolygon:
void RegularPolygon::setEdges(int edge)
{
	EdgesNumber=edge;
}
//The getter for the regularpolygon:
int RegularPolygon::getEdges()const
{
	return EdgesNumber;
}



//Fourth implementation for the Cirle:
Circle::Circle(const string& n,double x2,double x3,double r):CenteredShape(n,x2,x3)
{
	Radius=r;
}
Circle:Circle()
{
	Radius=0;
}
//The copy constructor for the circle:
Circle::Circle(const Circle& cpy):CenteredShape(cpy.getName(),copygetX(),copy.getY())
{
	Radius=copy.Radius;
}
//The setter for the circle:
void Circle::setRadius(double radius2)
{
	Radius=radius2;
}

//The getters for the circle:
double Circle::getRadius() const
{
	return Radius;
}


double Circle::perimeter()
{
	return 2*M_PI*Radius;
}
double Circle::area()
{
	return M_PI*Radius*Radius;
}


//The implemntation for the Rectangle:
Rectangle::Rectangle(){
	width=0; //default
	height=0; //default
}
Rectangle::Rectangle(const string& n, double nx,double ny,double nwidth,
double nheight): RegularPolygon(n,nx,ny,4){
	width=nwidth;
	height=nheight;
}
//Copy constructor
Rectangle::Rectangle(const Rectangle& copy): RegularPolygon(copy.getName(),
copy.getX(),copy.getY(),copy.getEdges()){
	width=copy.width;
	height=copy.height;
}
//Setters and getters
void Rectangle::setWidth(double nwidth){
	width=nwidth;
}
void Rectangle::setHeight(double nheight){
	height=nheight;
}

double Rectangle::getWidth() const{
	return width;
}
double Rectangle::getHeight() const{
	return height;
}
//Required methods
double Rectangle::perimeter(){
	return 2*width+2*height;
}
double Rectangle::area(){
	return width*height;
}



//Implementation for Square
Square::Square(){
	side=0; //default
}
Square::Square(const string& n,double nx,double ny,
double nside) : Rectangle(n,nx,ny,nside,nside){
	side=nside;
}
//Copy constructor 
Square::Square(const Square& copy): Rectangle(copy.getName(),copy.getX(),
copy.getY(),copy.getWidth(),copy.getHeight())
{
	side=copy.side;
}
//Setter and getter
void Square::setSide(double nside){
	side=nside;
}

double Square::getSide() const{
	return side;
}
//Required methods
double Square::perimeter(){
	return 4*side;
}
double Square::area(){
	return side*side;
}
