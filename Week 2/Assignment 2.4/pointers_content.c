
/*
CH-230-A
a2 p5.c
Rares Stefan Biasu
sbaiasu@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("A is= %d\n",a);
    int *ptr_a; // i get a pointer for a
    ptr_a=&a;// i get the adresss of a in the pointer
    printf("The adress of a is= %p\n", ptr_a);// i use %p to show the adress
    *ptr_a= *ptr_a +5;
    printf("The value of a using pointers= %d\n",*ptr_a);// i use %d to show the  adress
    return 0;
}
