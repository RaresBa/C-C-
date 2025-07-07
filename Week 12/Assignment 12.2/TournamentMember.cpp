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


//The default constructor:
TournamentMember::TournamentMember()
{
    cout<<"The default constructor has  been called"<<endl;
    strcpy(first_name,"not specified");
    strcpy(last_name, "not specified");
    strcpy(date_of_birth,"9999-99-99");
    location="not_initialized";
}

//The parametic constructor:
TournamentMember::TournamentMember(char first_name[], char last_name[], char date_of_birth[],string &location, int age, string &nationality)
{
    cout<<"The parametic constructor has been called"<<endl;
    strcpy(this->first_name, first_name);
    strcpy(this->last_name, last_name);
    strcpy(this->date_of_birth, date_of_birth);
    this->location=location;
    this->age=age;
    this->nationality=nationality;
}

//The copy constructor:
TournamentMember::TournamentMember(TournamentMember& x)
{
    cout<<"The copy constructor has been called"<<endl;
    strcpy(first_name,x.first_name);
    strcpy(last_name,x.last_name);
    strcpy(date_of_birth,x.date_of_birth);
    location=x.location;
    nationality=x.nationality;
    age=x.age;
}

//The destructor constructor:
TournamentMember::~TournamentMember()
{
    cout<<"The destructor constructor has been called"<<endl;
}

//The print method:
void TournamentMember::print()
{
    cout<<"The print method has been called: ";
    cout<<"The first name: "<<endl;
    for(int i=0;i<strlen(first_name);i++)
    {
        cout<<first_name[i]<<endl;
    }
    cout<<"The last name: "<<endl;
    for(int i=0;i<strlen(last_name);i++)
    {
        cout<<last_name[i]<<endl;
    }
    cout<<"The date of birth: "<<endl;
    for(int i=0;i<strlen(date_of_birth);i++)
    {
        cout<<date_of_birth[i]<<endl;
    }
    cout<<"The location: "<<location<<endl;
    cout<<"The age: "<<age<<endl;
    cout<<"The nationality "<<nationality<<endl;
}