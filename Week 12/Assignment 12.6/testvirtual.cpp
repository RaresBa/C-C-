/*
   CH-230-A
   a12_p6.cpp
   Stefan Baiasu Rares
   sbaiasu@jacobs-university.de
*/



#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
 

const int num_obj = 6;


int main() {
	Area *list[num_obj];						
	// (1) --> initialiazing an array, based on pointers
	int index = 0;								
	// (2) --> initialiazing a index, like a counter that will help us loop trough
	//the elements in the array decleared previosly 
	double sum_area = 0.0;						
	// (3) -->initializing a variable "sum_area" that will have the sum of all the 
	//areas 
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);	
	// (4) -->initializing a Ring using one of the constructors constructor
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	list[0] = &blue_ring;					
	// (5) --> the program initialized the declared "blue_ring " with the memorry slot
	//0 from the pointer array declared at (1)
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	while (index < num_obj) {				
	// (7) --> the program check all the elements stored in the array
		(list[index])->getColor();				
		double area = list[index++]->calcArea();
	// (8) --> the program computes the area of an element and stores it into a
	//variable called "area" which is added to the "sum_area"
		sum_area += area;
	}
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	
	// (9) --> the program prints the sum of all arreas

	
	//The test I made for a square
	cout<<"Creating Square "<<endl;
	Square black_square("Black",20);
	cout<<"The Area of the Square: "<<black_square.calcArea()<<endl;
	cout<<"The Perimeter of the Square: "<<black_square>calcPerimeter()<<endl;
	return 0;
}
