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

int main()
{
    double real,imanginar;

    //First number:
    cout<<"Enter the first number: "<<endl;
    cin>>real>>imanginar;
    Complex x1(real,imanginar);

    //Second number:
    cout<<"Enter the second number: "<<endl;
    cin>>real>>imanginar;
    Complex x2(real,imanginar);

    //The conjugate:
    Complex con;
    con=x1.conjugate();
    cout<<"Conjugate: "<<endl;
    con.print();

    //The sum:
    Complex suma2;
    suma2=x1.suma(x2);
    cout<<"The sum: "<<endl;
    suma2.print();

    //The difference:
    Complex diferenta2;
    diferenta2=x1.diferenta(x2);
    cout<<"The difference: "<<endl;

    //The multiplication: 
    Complex multi2;
    multi2=x1.multi(x2);
    cout<<"The multi: "<<endl;
    
    return 0;
}