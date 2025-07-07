/*
CH-230-A
a12 p2.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/

#include <string>
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
    void setDate_of_Birth(char *);
    void setLocation(string&);
    void setAge(int );
    void setNationality(string);

    //The print method:
    void print();

};

class Player: public TournamentMember
{
    private:

    int number;
    int number_goals;
    char position[40];
    char foot;

    public:

    //The constructors:
    //The default constructor:
    Player();
    //The parametic constructor:
    Player(char *, char*, char*, float, float, string&,int ,char*,int,char);
    //The copy constructor:
    Player(Player&);
    //The destructor:
    ~Player();

    //The getters:
    int getNumber();
    int getNumber_Goals();
    char* getPosition();
    char getFoot();

    //The setters:
    void setNumber(int);
    void setPosition(char*);
    void setFoot(char);
    
    //What we need to print:
    void printPlayer();
    void addGoal();
};


//The inline getters:
inline char* TournamentMember::getFirst_Name()
{
    return first_name;
}
inline char* TournamentMember::getLast_Name()
{
    return first_name;
}
inline char* TournamentMember::getDate_of_Birth()
{
    return date_of_birth;
}
inline string TournamentMember::getLocation()
{
    return location;
}
inline char* TournamentMember::getAge()
{
    return age;
}
inline string TournamentMember::getNationality()
{
    return nationality;
}

//The inline setters:
inline void TournamentMember::setFirst_Name(char first_name[])
{
    strcpy(this->first_name,first_name);
}
inline void TournamentMember::setLast_name(char last_name[])
{
    strcpy(this->last_name,last_name);
}
inline void TournamentMember::setDate_of_Birth(char date_of_birth[])
{
    strcpy(this->dat_of_birth,date_of_birth);
}
inline void TournamentMember::setLocation(string& location)
{
    this->location=location;
}
inline void Tournament::setNationality(string& nationality)
{
    this->nationality=nationality;
}
inline void TournamentMember::setAge(int age)
{
    this->age=age;
}

//The  inline getters:
inline int Player::getNumber()
{
    return number;
}
inline char* Player::getPosition()
{
    return position;
}
inline int Player::getGoals()
{
    return goals;
}
inline int Player::Foot()
{
    return foot;
}

//The inline setters:
inline void Player::setNumber(int number)
{
    this->number=number;
}
inline void Player::setPosition(char position[])
{
    strcpy(this->position,position);
}
inline void Player::setFoot(char foot)
{
    this->foot=foot;
}