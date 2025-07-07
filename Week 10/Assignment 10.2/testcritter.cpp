/*
CH-230-A
a10_p2.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/



#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name;
	int hunger;
    string colour;
    double price;
 
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	getline(cin, name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

    //What I added
    cout<<"Colour: ";
    getline(cin,colour);
    cout<<"Price: ";
    cin>>price;

	cout << "You have created:" << endl;
	c.print();
        return 0;
}