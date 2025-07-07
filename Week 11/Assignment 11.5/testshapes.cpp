/*
   CH-230-A
   a11_p5.cpp
   Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/






#include "Shapes.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
//The tests for all the objects:
  Circle c("first circle", 3, 4, 7);
  RegularPolygon r("TRIANGLE", 1, 1, 3);

  r.printName();
  c.printName();


//Circle:
  Circle cerc("First the circle",2,2,4);
  cout<<"Perimeter: "<<cerc.perimeter()<<endl;
  cout<<"Area: "<<cerc.area()<<endl;

//Rectangle:
  Rectangle raza("First ractangle",2,2,2,4);
  cout<<"Perimeter: "<<raza.perimeter()<<endl;
  cout<<"Area: "<<raza.area()<<endl;

//Square:
  Square latura("First square: ",2,2,4);
  cout<<"Perimeter: "<<latura.perimeter()<<endl;
  cout<<"Area: "<<latura.area()<<endl;

}