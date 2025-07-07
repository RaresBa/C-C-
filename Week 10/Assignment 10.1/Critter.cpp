#include <iostream>
#include "Critter.h"

//using namespace std;

//this error appears after I remove "using namespace std;" for the string command 
//because I need to add "std::" which comes from the "Standard" list of commands
//If i do not put that the compailer does not recognize "string"
void setName(string& newname)
{
	name = newname;
}
//because I removed "Critter:: " the "setName" method which was in the file "Critter.h" 
//in the class Critter is nopt recognized by the comapiler so It will
//give out an error without the "Critter:: "
void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
}
//here there are two errors after I remove "using namespace std;"
//first when I am calling "cout" the comapiler those not recognise
//the command so I need to add "std::" and also at the "endl" command
//these are both "standard" commands which need "std::"

int Critter::getHunger() {
	return hunger;
}