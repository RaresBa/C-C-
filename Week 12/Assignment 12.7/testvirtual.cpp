/*
   CH-230-A
   a12_p7.cpp
   Stefan Baiasu Rares
   sbaiasu@jacobs-university.de
*/



#include <iostream>
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

const int num_obj = 25;


int main() {
	//I declare the color string as asked
	string color[]={"RED","BLACK","VIOLET","BLUE"};
	//I declare the seed for the program
	srand(time(0));
	for(int i=0;i<24;i++)
	{	
		//I take all the geometric forms: circle,square,rectangle and ring
		//and calculate the area and the perimeter of each of them
		if(rand()%4==0)
		{

			Circle circle(color[rand()%4].c_str(),rand()%96+5);
			cout<<"The Area is: "<<circle.calcArea()<<endl;
			cout<<"The Perimeter is: "<<circle.calcPerimeter()<<endl;
		}
		else if (rand()%4==1)
		{
			Square square(color[rand()%4].c_str(),rand()%96+5);
			cout<<"The Area is: "<<square.calcArea()<<endl;
			cout<<"The Perimeter is: "<<square.calcPerimeter()<<endl;
		}
		else if (rand()%4==2)
		{
			Rectangle rectangle(color[rand()%4].c_str(),rand()%96+5,rand()%96+5);
			cout<<"The Area is: "<<rectangle.calcArea()<<endl;
			cout<<"The Perimeter is: "<<rectangle.calcPerimeter()<<endl;
		}
		else if (rand()%4==3)
		{
			Ring ring(color[rand()%4].c_str(),rand()%96+5,rand()%96+5);
			cout<<"The Area is: "<<ring.calcArea()<<endl;
			cout<<"The Perimeter is: "<<ring.calcPerimeter()<<endl;
		}
	}

	return 0;
}
