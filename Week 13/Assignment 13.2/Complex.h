/*
   CH-230-A
   a13_p2.cpp
   Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/ 

#ifndef COMPLEX_H_
#define COMPLEX_H_

using namespace std;

class Complex
{
    private: 
    double real;
    double imaginar;
    public:
        //The default constructor:
        Complex();

        //The parametric constructor:
        Complex(double, double);
        
        //The copy constructor:
        Complex(const Complex&);

        //The destructor:
        ~Complex();


        //Getters:
        double getReal();
        double getImaginar();

        //Setters:
        void setReal(double);
        void setImaginar(double);

        //The neede methods:
        Complex suma(Complex);
        Complex diff(Complex);
        Complex multi();
        Complex conjugate();

        //The print method:
        void print();

        //The operators:
        Complex operator +(const Complex&);
        Complex operator -(const Complex&);
        Complex operator *(const Complex&);
        Complex& operator =(const Complex&);
        
        friend istream& operator >> (istream& in, Complex&);
        friend ostream& operator << (ostream& out, const Complex&);
};
#endif