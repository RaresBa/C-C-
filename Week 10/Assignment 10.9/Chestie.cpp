#include <iostream>
#include <string.h>
#include "City.h"

using namespace std;

City::City()
{
    area=0;
    locuitori=0;
    primarname="NULL";
    cout<<"The default constructor"<<endl;
}

City::City(const City& other)
{
    area=area.other;
    locuitori=locuitori.other;
    primarname=primarname.other;
}

City::~City()
{
    cout<<"The destructor has been called"<<endl;
}

City::City(std:: string newPrimarName,double newArea,int newLocuitori)
{
     primarname=newPrimarName;
     locuitori=newLocuitori;
     area=newArea;
}

void City::setPrimarName(string Primar)
{
    primarname=Primar;
}
void City::setArea(double Area)
{
    area=Area;
}
void City::setLocuitori(int Locuitori)
{
    locouitori=Locuitori;
}

string City::getPrimarName()
{
    return primarname;
}
double City::getArea()
{
    return area;
}

int City::getLocuitori()
{
    return locuitori;
}

void City::print()
{
    cout<<
}

City operator +(const City&);

City City::operator +(const City& n)
{
    City total;
    total.area=area+n.area;
    total.locuitori=locuitori+n.locuitori;
    return total;
}
friend istream& operator >> (istream& in, const City&)

friend ostream& operator <<(ostream& out, const City&)
istream operator >>(istream& in, const City& n)
{
    in>>n.locouitori>>n.area;
    return in;
}

ostream operator <<(ostream& out,const City& n)
{
    out<<n.locouitori<<" "<<n.area;
    return out;
}