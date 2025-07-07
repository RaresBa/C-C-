/*
CH-230-A
a12 p2.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/


#include "TournamentMember.h"
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    char first_name[]={"Rares"};
    char last_name[]={"Baiasu"};
    char date_of_birth[]={"2004-05-10"};
    string location="Romania";
    string nationality="Romanian";
    int age=19;

    //Calling the default constructor:
    TournamentMember r;
    //Calling the parametric constructor:
    TournamentMember x(first_name,last_name,date_of_birth,location,age,nationality);
    //Calling the copy constructor:
    TournamentMember y(x);
    //Calling the set location:
    r.setLocation(location);
    //Testing all the print methods:
    r.print();
    x.print();
    y.print();
    return 0;
}