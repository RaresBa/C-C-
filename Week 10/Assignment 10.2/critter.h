/*
CH-230-A
a10_p2.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/




#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;
    double price;
    std::string colour;


public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);

    //the new ones I added:
    void getPrice(double newprice);
    void getColour(std::string& newcolour);

	// getter method
	int getHunger();
    std::string setName();
    //the new ones I added:
    double getPrice();
    std::string getColour();

	void print();
};