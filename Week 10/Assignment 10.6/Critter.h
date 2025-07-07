/*
   CH-230-A
   a10_p6.cpp
   Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/



#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	double hunger;
	int boredom;
	double height;
	//Newly added properties
	int age;
	double weight;
	double thirst;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);

	//Newly added setters
	void setAge (int newage);
	void setWeight(double newweight);

	// getter method
	int getHunger();

	//Newly added getters
	int getAge();
	double getWeight();

	// service method
	void print();

	//The Constructors
	Critter();
	Critter(std::string &);
	Critter(std::string &, int, int , double = 10);
	Critter(std::string &, int ,int ,double, double);

	//Hunger conversions
	double doubleHunger(int);
	int intHunger(double);
};