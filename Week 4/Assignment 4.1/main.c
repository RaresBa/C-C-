/*
CH-230-A
a4 p1.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>

int main()
{
    double svalue,hvalue,step;
    scanf("%lf", &svalue);
    scanf("%lf", &hvalue);
    scanf("%lf", &step);
    double r,area,perimter;
    for(r=svalue;r<=hvalue;r=r+step)
    //r starts from the start value and goes up by a "step" until highest
    {
        area=M_PI*r*r;
        //area of the circle
        perimter=2*M_PI*r;
        //perimeter
        printf("%lf ", r);
        printf("%lf ", area);
        printf("%lf\n", perimter);
    }
    return 0;
}
