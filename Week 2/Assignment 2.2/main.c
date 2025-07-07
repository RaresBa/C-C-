/*
CH-230-A
a2 p3.c
Rares Stefan Biasu
sbaiasu@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int w,d,h;
    printf("Enter how many weeks:");
    scanf("%d", &w);
    printf("Enter how many days:");
    scanf("%d", &d);
    printf("Enter how many hours:");
    scanf("%d", &h);
    int sum;
    sum= w*168+d*24+h;// 1 week has 168 hours, 1 day has 24hours so i convert all in hours than make the sum
    printf("The total number of hours is: %d\n", sum);
    return 0;
}
