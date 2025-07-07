/*
   CH-230-A
   a10_p6.cpp
   Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/


#include "Critter.h"
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv)
{
	string s="hello1";
	Critter c;
	cout<<"Created:"<<endl;
	c.print();



	Critter c1(s);
	cout<<"Created:"<<endl;
	c1.print();




	s="hello2";
	Critter c2(s,2,7);
	cout<<"Created:"<<endl;
	c2.print();




	s="hello3";
	Critter c3(s,2,7,5);
	cout<<"Created:" << endl;
	c3.print();
	



	s="hello4";
	Critter c4(s,2,7,5,8.2);
	cout << "Created:" << endl;
	c4.print();


     return 0;
}