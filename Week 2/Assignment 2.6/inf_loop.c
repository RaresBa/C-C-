/*
CH-230-A
a2 p7.c
Rares Stefan Biasu
sbaiasu@jacobs-university.de
*/

#include <stdio.h>
int main()
{
int i = 8;
while (i >= 4)
{
    printf("i is %d\n", i);
    i--;
}
printf("That’s it.\n");

// the program was having an infinite loop because there whore no "{}" for the while
return 0;
}
