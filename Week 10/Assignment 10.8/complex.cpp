/*
   CH-230-A
   a10_p8.cpp
    Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/



#include <iostream>
#include <cmath>
#include "complex.h"

using namespace std;

Complex::Complex()
{
    real=0;
    imaginar=0;
}
Complex::Complex(double newReal, double newImaginar)
{
    real=newReal;
    imaginar=newImaginar;
}
Complex::Complex(const Complex& x)
{
    real=x.real;
    imaginar=x.imaginar;
}


//The setters:
void Complex::setReal(double newReal)
{
    real=newReal;
}
void Complex::setImaginar(double newImaginar)
{
    imaginar=newImaginar;
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

//The print:
void Complex::print()
{
    cout<<noshowpos<<real<<showpos<<imaginar<<"i"<<endl;
}

//The operations:
Complex Complex::suma(Complex n)
{
    Complex suma;
    suma.real=real+n.real;
    suma.imaginar=imaginar+n.imaginar;
    return suma;
}
Complex Complex::diferenta(Complex n)
{
    Complex diferenta;
    diferenta.real=real-n.real;
    diferenta.imaginar=imaginar-n.imaginar;
    return diferenta;
}
Complex Complex::multi(Complex n)
{
    Complex multi;
    multi.real=(real*n.real-imaginar*n.imaginar);
    multi.imaginar=(real*n.imaginar+imaginar*n.real);
    return multi;
}
Complex Complex::conjugate()
{
    Complex conjugate;
    conjugate.real=real;
    conjugate.imaginar=imaginar*(-1);
    return conjugate;
}

