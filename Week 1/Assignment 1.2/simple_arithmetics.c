
/*
CH-230-A
a1_p4.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    x=17;
    y=4;
    printf("x=%d\n",x);
    printf("y=%d\n",y);
    int sum;
    sum=x+y;
    printf("sum=%d\n",sum);
    int prod;
    prod=x*y;
    printf("product=%d\n",prod);
    int dif;
    dif=x-y;
    printf("difference=%d\n",dif);
    float div;
    div=x*1.0/y;
    printf("division=%lf\n",div);
    int rem;
    rem=x%y;
    printf("remainder of division=%d\n",rem);
    return 0;
}
