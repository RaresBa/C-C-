/*
   CH-230-A
   a10_p4.cpp
   Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/



#include <iostream>
#include <cstdlib>
#include "Critter.h"
#include <cstring>

using namespace std;

int main()
{
    string test;

    //Test1
    test="test1";
    Critter x;
    cout<<"First test:  "<<endl;
    x.print();
    
    //Test2
    Critter x1(test);
    cout<<"Second test:  "<<endl;
    x1.print();
    
    //Test3
    test="test2";
    Critter x2(test,2,10);
    cout <<"Third test: "<<endl;
    x2.print();
    
    //Test 4
    test="test3";
    Critter x3(test,2,10,11);
    cout <<"You have created: "<<endl;
    x3.print();



        return 0;
}