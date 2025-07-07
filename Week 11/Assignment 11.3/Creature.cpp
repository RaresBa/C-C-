/*
   CH-230-A
   a11_p3.cpp
   Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/


#include <iostream>
#include "Creature.h"

using namespace std;

//The implementations for class Creature:
Creature::Creature(): distance(10)
{}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  


//The implementations for class Wizard:
Wizard::Wizard() : distFactor(3)
{}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//The implementations for class Elf:
Elf::Elf():distancetotarget(12)
{

    cout<<"Elf constructor has beencalled"<<endl;
}

void Elf::aim() const
{
    cout<<"Aim method has been called"<<endl;
    cout<<"An elf can aim at a distance of maximum"<<distancetotarget+13<<"meters."<<endl;
}



//The implementations for class Healer:
Healer::Healer():hp(50)
{

    cout<<"Healer constructor has beencalled"<<endl;
}

void Healer::heal() const
{
    cout<<"Heal method has been called"<<endl;
    cout<<"A healer can heal a maximum of "<<hp<<"hp."<<endl;
}
