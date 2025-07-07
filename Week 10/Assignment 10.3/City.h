/*
   CH-230-A
   a10_p3.cpp
   Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/



#include <string>// defines standard C++ string class

/* First C++ class */
class City 
{

private: // data members are private
	std::string name;
	int inhabitants; 
	std::string mayor;
	double area;

public:
	// setter methods
	void setName (std::string& newName);
	void setHabitants (int new_Inhabitants);
	void setMayorName (std::string& new_Mayor);
	void setArea (double newArea);

	// getter methods
	std::string getName();
	int getInhabitants();
	std::string getMayorName();
	float getArea();

};