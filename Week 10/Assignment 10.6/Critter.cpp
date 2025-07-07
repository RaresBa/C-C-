/*
   CH-230-A
   a10_p6.cpp
   Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/




#include <iostream>
#include "Critter.h"

using namespace std;

//The setters:

void Critter::setName(string& newname) 
{
	name = newname;
}

void Critter::setHunger(int newhunger) 
{
	hunger = doubleHunger(newhunger);
}

void Critter::setAge(int newage){
	age=newage;
}

void Critter::setWeight(double newweight){
	weight=newweight;
}



//The getters:

int Critter::getHunger() 
{
	return  intHunger(hunger);
}

int Critter::getAge()
{
	return age;
}

double Critter::getWeight(){
	return weight;
}

//Default constructer 
Critter::Critter()
{
	cout<<"First constructor: "<<endl;
	name="default";
	height=5;
	boredom=hunger=age=weight=0;
	thirst=hunger;
}

//Second constructor(one parameter)
Critter::Critter(string& newname)
{
	cout<<"Second construcetor: "<<endl;
	name=newname;
	height=5;
	boredom=hunger=age=weight=0;
	thirst=hunger;
}

//The third constructor(all parameters)
Critter::Critter(string& newname, int newhunger, int newboredom, double newheight)
{
	cout<<"Third constructor: "<<endl;
	name=newname;
	hunger=doubleHunger(newhunger);
	boredom=newboredom;	
	height=newheight;
	thirst=hunger;
}
//The forth constructor(all parameters)
Critter::Critter(string& newname,int newhunger, int newboredom,
double newheight, double newthirst)
{
	cout<<"Fourth constructor: "<<endl;
	name=newname;
	hunger=doubleHunger(newhunger);
	boredom=newboredom;	
	height=newheight;
	thirst=newthirst;
	age=weight=0;
}




//The print method

void Critter::print()
 {

	cout << "Name: "<< name<< "Hunger: "<<intHunger(hunger)<< "Boredom: "<<boredom<<"Height: "<<height<<"Thirst: "<<thirst<<endl;
}

//Conversion
double Critter::doubleHunger(int newhunger)
{
	return newhunger/10.00;
}

int Critter::intHunger(double newhunger)
{
	return newhunger*10.00;
}