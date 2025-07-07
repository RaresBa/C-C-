/*
   CH-230-A
   a10_p3.cpp
    Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/



#include "City.h"
#include <iostream>


//the setter methods
void City::setName(std::string& newname)
{
	name=newname;
}
void City::setHabitants(int new_Inhabitants)
{
	inhabitants=new_Inhabitants;
}
void City::setMayorName(std::string& new_Mayor)
{
	mayor=new_Mayor;
}
void City::setArea (double newArea)
{
	area=newArea;
}


// the getter methods
std::string City::getName()
{
	return name;
}
int City::getInhabitants()
{
	return inhabitants;
}
std::string City::getMayorName()
{
	return mayor;
}
float City::getArea()
{
	return area;
}