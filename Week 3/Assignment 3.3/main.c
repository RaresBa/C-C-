/*
CH-230-A
a3 p3.C
Rares Ilin Alexandru
rilin@jacobs-university.de
*/
#include <stdio.h>
float convert(int a){
    return (float)a/ 100000;
}
int main()
{
    int n,x;
    scanf("%d",&n);
    x=convert(n);
    printf("Result of conversion: %d\n",x);
    return 0;
}
