/*
   CH-230-A
   a10_p4.cpp
   Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/
#ifndef CRITTER_H
#define CRITTER_H

#include <iostream>
#include <string> // defines standard C++ string class


/* First C++ class */

class Critter

{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
    int age;
    double weight;
	double height;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
    void setAge(int newage);
    void setWeight(double newweight);
	// getter method
	int getHunger();
    int getAge();
    int getName();
    int getBoredom();
    double getWeight();
	// service method
	void print();
    //The constructor with the default hight of 10
    Critter();
    Critter(std::string &);
    Critter(std::string &, int, int, double=10);

};
#endif