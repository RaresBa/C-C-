

/*
   CH-230-A
   a12_p4.cpp
   Stefan Baiasu Rares
   sbaiasu@jacobs-university.de
*/


#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
    Fraction a,b;
    cin>>a>>b;
    
    if(a>b)
    {
        cout<<"The bigger function: "<<a<<endl;
    }else{
    cout<<"The bigger function: "<<b<<endl;
    }

    Fraction suma,diferenta;

    suma=a+b;
    diferenta=a-b;

    cout<<suma<<endl;
    cout<<diferenta<<endl;
    return 0;
}