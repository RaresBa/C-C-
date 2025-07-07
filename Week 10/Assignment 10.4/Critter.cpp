/*
   CH-230-A
   a10_p4.cpp
   Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/



#include <iostream>
#include "Critter.h"

using namespace std;



//The setters
void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setAge(int newage) {
	age=newage;
}

void Critter::setWeight(double newweight) {
	weight=newweight;
}



//The getters
int Critter::getHunger() {
	return hunger;
}

int Critter::getAge()
{
    return age;
}

double Critter::getWeight()
{
    return weight;
}



//The Constructors:

//First Constructor
Critter::Critter()
{
    cout<<"The name: default_critter"<<endl;
    height=5;
    age=weight=boredom=hunger=10;
}

//Second Constructor with only "name as a parameter"
Critter::Critter(string& newname)
{
    cout<<"The Constructor with only name as parameter: "<<endl;
    name=newname;
    height=5;
}

//Third Constructor with all parameters
Critter::Critter(string& newnname,int newhunger, double newheight , int newboredom)
{
    cout<<"The Constructor with all parameters: "<<endl;
    name=newname;
    height=newheight;
    hunger=newhunger;
    boredom=newboredom;
}
void Critter:print()
{
    cout<<"Name: "<<name<<" Hunger: "<<hunger<<" Boredom: "<<boredom<<" Height: "<<height<<endl;
}