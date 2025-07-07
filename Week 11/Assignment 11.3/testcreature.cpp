
/*
   CH-230-A
   a11_p3.cpp
   Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"


using namespace std;
int main()
{ 

    //The tests for the program, calling every  class and its parameters.
    
    cout << "Creating an Creature.\n"<<endl;;
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n"<<endl;
    Wizard w;
    w.run();
    w.hover();


    //Calling and creating the new classes

    cout<<"Creating an Elf.\n"<<endl;
    Elf e;
    e.aim();

    cout<<"Creating a Healer.\n"<<endl;
    Healer h;
    h.heal(); 

    return 0;
    
}