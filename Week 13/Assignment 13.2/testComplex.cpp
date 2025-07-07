/*
   CH-230-A
   a13_p2.cpp
   Baiasu Stefan Rares  
   sbaiasu@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include "Complex.h"

using namespace std;


int main()
{
    //Opening the input files:
    ifstream fin("in1.txt");
    ifstream fin1("in2.txt");

    //Opening the output file:
    ofstream fout("output.txt");

    Complex x,y,suma,diferenta,produs;

    fin>>x;
    fin1>>y;

    suma=x+y;
    diferenta=x-y;
    produs=x*y;

    //Printing the results in the output file:
    fout<<"The sum is: "<<suma<<endl;
    fout<<"The difference is: "<<diferenta<<endl;
    fout<<"The product is: "<<produs<<endl;

    //Printing the result on the screen:
    cout<<"The sum is: "<<suma<<endl;
    cout<<"The difference is: "<<diferenta<<endl;
    cout<<"The product is: "<<produs<<endl;

    //Closing the files:
    fin.close();
    fin1.close();
    fout.close();
    return 0;
}
