


/*
CH-230-A
a4 p10.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>
void proddivpowinv(float a ,float b,float *p, float *d,float *pwr,float *invb)
{
    *p=a*b;
    *d=a/b;
    *pwr=1;
    for(int i=0;i<b;i++)
    {
        *pwr= *pwr*a;
    }
    //we do the product of a*a b times
    *invb=1/b;
    //the invers of b
}
int main()
{
    float a=2.0, b=12.0,p,d,pwr,inv_b;
    proddivpowinv(a,b,&p,&d,&pwr,&inv_b);
    //i call the fuction
    printf("Product: %f\n", p);
    printf("Division: %f\n",d);
    printf("a^b: %f\n",pwr);
    printf("1/b: %f\n",inv_b);
    return 0;
}
