/*
CH-230-A
a12 p2.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/

#include <string.h>
#include <iostream>
#include <cstring>

using namespace std;

class TournamentMember
{
    private:
    char first_name[37];
    char last_name[36];
    char date_of_birth[11];

    string location;

    //The two general proprities I added:
    int age;
    string nationality;

    public:

    //The default constructor:
    TournamentMember();
    //The parametic constructor:
    TournamentMember(char *, char *, char *, string& , int, string&);
    //The copy constructor:
    TournamentMember(TournamentMember&);
    //The destructor constructor:
    ~TournamentMember();

    //The getters:

    char* getFirst_Name();
    char* getLast_Name();
    char* getDate_of_Birth();
    string getLocation();
    int getAge();
    string getNationality();

    //The setters:

    void setFirst_Name(char*);
    void setLast_Name(char *);
    void setDate_of_Birt(char *);
    void setLocation(string&);
    void setAge(int );
    void setNationality(string);

    //The print method:
    void print();

};