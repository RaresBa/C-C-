/*
   CH-230-A
   a10_p5.cpp
   Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/


#include <iostream>
#include "Critter.h"

using namespace std;


/// The sets:
void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setAge(int newage){
	age=newage;
}

void Critter::setWeight(double newweight){
	weight=newweight;
}

//The gets:

int Critter::getAge(){
	return age;
}

double Critter::getWeight()
{
	return weight;
}

int Critter::getHunger() 
{
	return hunger;
}

//The constructors

//First default constructor:

Critter::Critter()
{
	cout<<"The default constructor is called"<<endl;
	name="default_critter";
	height=5;
	boredom=hunger=age=weight=0;
	thirst=hunger;
}

//Second constructor with one parameter

Critter::Critter(string& newname)
{
	cout<<"The constructor with one parameter (name) is called"<<endl;
	name=newname;
	height=5;
	boredom=hunger=age=weight=0;
	thirst=hunger;
}

//The third constructor with all parameters

Critter::Critter(string& newname, int newhunger, int newboredom, double newheight)
{
	cout<<"The constructor with all param.(or all except height) is called"<<
	endl;
	name=newname;
	hunger=doubleHunger(newhunger);
	boredom=newboredom;	
	height=newheight;
	thirst=hunger;
	age=weight=0;
}
void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
}

//The converrsion:
double Critter::doubleHunger(int newhunger)
{
	return newhunger/10.0;
}

int Critter::intHunger(double newhunger)
{
	return newhunger*10;
}