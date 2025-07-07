/*
   CH-230-A
   a13_p2.cpp
   Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/

#include "Complex.h"
#include <iostream>
#include <cmath>

using namespace std;

//The default constructor:
Complex::Complex()
{
    real=0;
    imaginar=0;
}

//The parametric constructor:
Complex::Complex(double newReal, double newImaginar)
{
    real=newReal;
    imaginar=newReal;
}

//The copy constructor:
Complex::Complex(const Complex& z)
{
    real=z.real;
    imaginar=z.imaginar;
}

//The destructor constructor:
Complex::~Complex()
{

}


//The getters:
double Complex::getReal()
{
    return real;
}
double Complex::getImaginar()
{
    return imaginar;
}

//The setters:
void Complex::setReal(double newreal)
{
    real=newreal;
}
void Complex::setImaginar(double newimaginar)
{
    imaginar=newimaginar;
}

//The printing method:
void Complex::print()
{
    cout<<noshowpos<<real<<showpos<<imaginar<<"i"<<endl;
}

//The required functions:

//The sum:
Complex Complex::suma(Complex n)
{
    Complex sum;
    sum.real=real+n.real;
    sum.imaginar=imaginar+n.imaginar;
    return sum;
}

//The dif:
Complex Complex::diff(Complex n)
{
    Complex diferenta;
    diferenta.real=real-n.real;
    diferenta.imaginar=imaginar-n.imaginar;
    return diferenta;
}

//The multiplicatin:
Complex Complex::multi()
{
    Complex multiplicare;
    multiplicare.real=(real*n.real-imaginar*n.imaginar);
    multiplicare.imaginar=(real*n.imaginar+imaginar*n.real);
    return multiplicare;
}

//The conjugate:
Complex Complex::conjugate()
{
    Complex conjugat;
    conjugat.real=real;
    conjugat.imaginar=imaginar*(-1);
    return conjugat;
}

//The definition for "+":
Complex Complex::operator +(const Complex& n)
{
    Complex r;
    r.real=real+n.real;
    r.imaginar=imaginar+n.imaginar;
    return r;
}

//The definition for "-":
Complex Complex::operator -(const Complex& n)
{
    Complex r;
    r.real=real-n.real;
    r.imaginar=imaginar-n.imaginar;
    return r;
}

//The definition for "*":
Complex Complex::operator *( const Complex& n)
{
    Complex r;
    r.real=real+n.real;
    r.imaginar=imaginar+n.imaginar;
    return r;
}

//The definition for "=":
Complex& Complex::operator =(const Complex& n)
{
    this->real=n.real;
    this->imaginar=n.imaginar;
    return *this;
}

//The definition for "<<"
ostream& operator << (ostream& out,const Complex& n)
{
    out<<noshowpos<n.real<<showpos<<n.imaginar<<"i"<<endl;
    return out;
}

//The definition for ">>"
istream& operator >> (istream& in,const Complex& n)
{
    in>>n.real>>n.imaginar;
    return in;
}