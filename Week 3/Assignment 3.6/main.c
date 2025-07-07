/*
CH-230-A
a3 p6.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>
float to_pounds(int kg , int g)
{
     double sum=0;
     sum=(2.2*kg)+(2.2*g)/1000;
        // we convert into grams
     return sum;
}
int main()
{
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Result of conversion: %lf\n",to_pounds(a,b));
    //we call the function from above
    return 0;
}
