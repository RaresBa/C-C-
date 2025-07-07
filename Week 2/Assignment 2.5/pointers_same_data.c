/*
CH-230-A
a2 p7.c
Rares Stefan Biasu
sbaiasu@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x,y;
    printf("Please enter the value of x: ");
    scanf("%d", &x);
    printf("Please enter the value of y: ");
    scanf("%d", &y);
    double *ptr_one, *ptr_two, *ptr_three;
    ptr_one= &x;
    ptr_two= &x;
    ptr_three= &y;
    printf("The adress of prt_one is: %p\n", ptr_one);
    printf("The adress of ptr_two is: %p\n", ptr_two);
    if(ptr_one==ptr_two) // i compare the adresses of both the pointers
    {
        printf("The adress of ptr_one and ptr_two are the same\n");
    }
    printf("The adress of ptr_three is: %p\n",ptr_three);
    printf("The adresses of ptr_one and ptr_two is different than the adress of ptr_three");
    // the adreses can not be the same because they take up different memory slots
    return 0;
}
