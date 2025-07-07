/*
CH-230-A
a2 p10.c
Rares Stefan Biasu
sbaiasu@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int days,hours;
    int i=1;
    int n;
    printf("Enter a number n: ");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("N needs to be positive and non-zero");
    }else
    while(i<=n)
    {
        days=i;
        hours=i*24;
        printf("%d day = ",days);// i made a while loop until i is equal to n
        printf("%d hours \n", hours);
        i++;
    }
    return 0;
}
