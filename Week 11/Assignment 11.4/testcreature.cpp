
/*
   CH-230-A
   a11_p3.cpp
   Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"
#include <cstring>

using namespace std;
int main()
{ 

    string input;


    while(true)
    {
        //While the input is different than "quit" the program will acces
        //different clases using the x()*y = new x(); command and the delete
        //comand for each case

        cout<<"Enter what you want to create: "<<endl;
        cin>>input;

    if(input=="creature")
    {
    cout << "Creating an Creature.\n"<<endl;;
    Creature *c=new Creature();
    c->run();
    delete c;
    }
    else if(input=="wizzard")
    {
    cout << "\nCreating a Wizard.\n"<<endl;
    Wizard *w=new Wizard();
    w->run();
    w->hover();
    delete w;
    }else if(input=="elf")
    {
    cout<<"Creating an Elf.\n"<<endl;
    Elf *e=new Elf();
    e->aim();
    delete e;
    }else if(input=="healer")
    {
    cout<<"Creating a Healer.\n"<<endl;
    Healer *h=new Healer();
    h->heal();
    delete h;
    }else if(input=="quit")
    {
        break;
    }
    //When the user types quit the program will stop
    }
    return 0;
    
}