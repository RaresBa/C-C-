/*
CH-230-A
a2 p8.c
Rares Stefan Biasu
sbaiasu@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d", &a);
    if(a%2==0 && a%7==0)//i check if the rest for the divion of a with two and 7 is 0
    {
        printf("The number is divisible by 2 and 7\n");
    }else
        printf("The number is NOT divisible by 2 and 7\n");
    return 0;
}
