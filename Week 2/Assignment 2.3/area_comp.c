/*
CH-230-A
a2 p4.c
Rares Stefan Biasu
sbaiasu@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,h;
    printf("Please enter a: ");
    scanf("%f", &a);
    printf("Please enter b: ");
    scanf("%f", &b);
    printf("Please enter h: ");
    scanf("%f", &h);
    float patrat;
    patrat=a*a; // the area of a square
    float dreptunghi;
    dreptunghi=a*b; // the area of a rectangle
    float triunghi;
    triunghi=(a*h)/2; // the area of a triangle
    float trapez;
    trapez=((a+b)*h)/2; // the area of trapezoid
    printf("square area= %f\n", patrat);
    printf("rectangle area= %f\n", dreptunghi);
    printf("triangle area= %f\n", triunghi);
    printf("trapezoid area= %f\n", trapez);
    return 0;
}
