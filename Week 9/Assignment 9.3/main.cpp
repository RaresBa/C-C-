/*
CH-230-A
a9 p3.cpp
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/

#include <iostream>
#include <cmath>

using namespace std;

float abs(float x)
{
    if(x<0)
    {
        return -x;
    }else
    {
        return x;
    }
//if x is lower than 0 i print -x;
//if x is higher or equal to 0 i print x 
}

int main()
{
    float n,y;
    cin>>n;
    y=abs(n);// y is the absolute value of n
    cout<<y;
    return 0;
}