/*
CH-230-A
a12 p1.c
Baisu Stefan Rares
sbaiasu@jacobs-university.de
*/


#include <iostream>
#include "Shapes.h"

using namespace std;

int main()
{
//Initializing the hexagons:'

    Hexagon first_hexagon("Blue Hexagon",0,0,9,"blue");
    Hexagon second_hexagon("Green Hexagon",0,0,15,"green");
    Hexagon third_hexagon(second_hexagon);

//The perimeter of the hexagons:

    cout<<"The perimeter of the first hexagon: "<<first_hexagon.perimetru()<<endl;
    cout<<"The perimeter of the second hexagon: "<<second_hexagon.perimetru()<<endl;
    cout<<"The perimeter of the the first constructor(the copy of the second one)"<<third_hexagon.perimetru()<<endl;

//The area of the hexagons:

    cout<<"The area of the first hexagon: "<<first_hexagon.area()<<endl;
    cout<<"The area of the second hexagon: "<<second_hexagon.area()<<endl;
    cout<<"The area of the third hexagon(the copy of the second hexagon): "<<third_hexagon.area()<<endl;

    return 0;
}   