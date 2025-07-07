
/*
CH-230-A
a3 p10.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/









#include <stdio.h>
#include <stdlib.h>
float product(float a, float b)
{
    return a*b;
    //first function where we return a number
}

void productbyref(float a, float b, float *p)
{
    *p=a*b;
    //second function we are calculating a number p which is the result
}

void modifybyref(float *a, float *b)
{
    *a=*a+3;
    *b=*b+11;
    //third function we modify the numbers which where inputed

}
int main()
{
   float a,b;
   scanf("%f", &a);
   scanf("%f", &b);
    float p1=1,p2=1;
    p1=product(a,b); // first function
    productbyref(a,b, &p2);//calling second function with p2
    printf("Using product function the result is: %.2f\n", p1);

    printf("Using productbyref function the resul is: %.2f\n", p2);
    if(p1==p2)//compare to show that the two functions have the same result
    {
        printf("As you can see the results are the same");
    }
    modifybyref(&a,&b);
    //third function
    printf("The third function:a=%.2f b=%.2f\n", a,b);
    return 0;
}
