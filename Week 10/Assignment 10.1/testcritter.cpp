#include <iostream>
#include <cstdlib>
#include "Critter.h"

//using namespace std;

int main(int argc, char** argv)
{
	Critter c;

//this error appears after I remove "using namespace std;" for the "string" command 
//because I need to add "std::" which comes from the "Standard" list of commands
//If i do not put that the compailer does not recognize "string"
	string name;
	int hunger;
 



//here there are two errors after I remove "using namespace std;"
//first when I am calling "cout" the comapiler those not recognise
//the command so I need to add "std::" and also at the "endl" command
//these are both "standard" commands which need "std::"
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces


//this error appers after I remove "using namespace std;" for the "getline" command
//because I need to add "std::" which comes from the "Standard" list of commands
//the comapiler does not recognize "getline"
	getline(cin, name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

	cout << "You have created:" << endl;
	c.print();
        return 0;
}