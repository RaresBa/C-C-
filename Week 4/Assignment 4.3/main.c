/*
CH-230-A
a4 p3.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/



#include <stdio.h>
#include <math.h>

float geometric_mean(float arr[] ,int num)
{
    float p=1.0;
    for(int i=0;i<num;i++)
    {
        p=p*arr[i];
    }
    return pow(p,1.0/num);
}

float highest_number(float arr[], int num)
{

    float h=0;
    for(int i=0;i<num;i++)
    {
        if(arr[i]>h)
        h=arr[i];
    }
    return h;
}

float smallest_number(float arr[], int num)
{
    float s=0;
    for(int i=0;i<num;i++)
    {
        if(v[i]<h)
        h=v[i];
    }
    return s;
}

float suma_number(float arr[] , int num)
{
    float suma=0;
    for(int i=0;i<num;i++)
    {
        suma=suma+v[i];
    }
    return suma;
}

int main ()
{
    float s[16];
    for(int i=1;i<15;i++)
    {
    scanf("%lf\n",&s[i]);
    if(s[i]<0)
    {
        break;
    }
    }
    char c;
    scanf("%c\n", &c);
    switch (c)
    {
    case 'm':
    {
        printf("%lf\n",geometric_mean(arr,n));
        break;
    }
    case 'h':
    {
        printf("%lf\n",highest_number(arr,num));
        break;
    }
    case 'l':
    {
        printf("%lf\n",smallest_number(arr,num));
        break;
    }
    case 's':
    {
        printf("%lf\n",suma_number(arr,num));
        break;
    }
    default:
    {
        break;
    }
    }
    return 0;
}
