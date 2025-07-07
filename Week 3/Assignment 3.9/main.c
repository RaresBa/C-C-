/*
CH-230-A
a3 p9.c
Ilin Rares Alexandru
rilin@jacobs-university.de
*/
#include <stdio.h>
double sum25(double v[], int n)
{
    if(n<6)
    {
        printf(" The size of the array is too small.\n");
        return -111.0;
    }
    double s=v[2]+v[5];
    return s;

}
int main()
{
    int x;
    double v[20],y;
    scanf("%d", &x);
    for(int i=0;i<x;i++)
    {
        scanf("%lf", &v[i]);
    }
    y=sum25(v,n);
    if(y!=-111.0)
    {
        printf("sum=%lf\n",y);
    }
    return 0;
}
