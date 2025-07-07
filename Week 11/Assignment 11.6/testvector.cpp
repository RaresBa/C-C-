/*
   CH-230-A
   a11_p6.cpp
   Stefan Baiasu Rares
   sbaiasu@jacobs-university.de
*/


#include "Vector.h"
#include <iostream>
 
using namespace std;

int main ()
{
	double *aux = new double[5]{1,2,3,4,5};
	double *aux1= new double[5]{0,1,2,3,4};


	Vector v1;
	Vector v2(5,aux);
	Vector v3(v2);
	Vector v4(5,aux1);


	cout<<"Second instance: "<<endl;
	cout<<v2.norm()<<endl;
	cout<<"The scalar between second and forth: "<<endl;
	cout<<v2.scalar(v4)<<endl;
	cout<<"Adding second and forth: "<<endl;
	(v2.add(v4)).printVector();
	cout<<"The difference between the second and forth"<<endl;
	(v2.diff(v4)).printVector();
	return 0;
}