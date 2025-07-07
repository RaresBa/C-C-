/*
   CH-230-A
   a10_p3.cpp
   Stefan Rares Baiasu
   sbaiasu@jacobs-university.de
*/



#include <iostream>
#include "City.h"
using namespace std;
int main ()
{
	//The 3 clases (cities)
	City Bremen,Paris,London;

	//City Names
	std::string BremenName,ParisName,LondonName;
	BremenName="Bremen";
	ParisName="Paris";
	LondonName="London";

	//Setting the Names
	Bremen.setName(BremenName);
	Paris.setName(ParisName);
	London.setName(LondonName);

	//Mayors Names
	std::string MayorBremen,MayorParis,MayorLondon;
	MayorBremen="Mayor1";
	MayorParis="Mayor2";
	MayorLondon="Mayor3";

	//Setting the Mayor Names
	Bremen.setMayorName(MayorBremen);
	Paris.setMayorName(MayorParis);
	London.setMayorName(MayorLondon);

	///The Habitants of the City
	Bremen.setHabitants(100001);
	Paris.setHabitants(200002);
	London.setHabitants(300003);

	//The Area of the City
	Bremen.setArea(101);
	Paris.setArea(202);
	London.setArea(303);

	//The info for the first city
	cout<<"The first city: "<<endl;
	cout<<"City name: "<<Bremen.getName()<<endl;
	cout<<"Mayor name: "<<Bremen.getMayorName()<<endl;
	cout<<"Inhabitants: "<<Bremen.getInhabitants()<<endl;
	cout<<"Area in squared km: "<<Bremen.getArea()<<endl;

	//The info for the second city
	cout<<"The second city: "<<endl;
	cout<<"City name: "<<Paris.getName()<<endl;
	cout<<"Mayor name: "<<Paris.getMayorName()<<endl;
	cout<<"Inhabitants: "<<Paris.getInhabitants()<<endl;
	cout<<"Area in squared km: "<<Paris.getArea()<<endl;

	//The info for the third city
	cout<<"The first city: "<<endl;
	cout<<"City name: "<<London.getName()<<endl;
	cout<<"Mayor name: "<<London.getMayorName()<<endl;
	cout<<"Inhabitants: "<<London.getInhabitants()<<endl;
	cout<<"Area in squared km: "<<London.getArea()<<endl;

	return 0;
}