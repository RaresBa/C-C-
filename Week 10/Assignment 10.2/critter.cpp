
/*
CH-230-A
a10_p2.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/




#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) 
{
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}
void Critter::getPrice(double newprice)
{
    price = newprice;
}
void Critter::getColour(string& newcolour)
{
    colour=newcolour;
}

void Critter::print()
{
	cout << "I am " << name << ". My hunger level is " << hunger << "." << "My price is "<< price<< "."<<"My colour is "<<colour<<endl;
}

int Critter::getHunger()
{
	return hunger;
}
string Critter::setName()
{
    return name;
}
double Critter::getPrice()
{
    return price;
}
string Critter::getColour()
{
    return colour;
}