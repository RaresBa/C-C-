
/*
CH-230-A
a2 p2.c
Rares Stefan Biasu
sbaiasu@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    a=getchar(); //we get a char from the keyboard
    printf("character=%c\n",a);
    printf("decimal=%d\n",a);// %d is for decimal notation
    printf("octal=%o\n",a);// %o is for octal notation
    printf("hexadecimal=%x\n",a);// %x is for hexadecimal notation
    return 0;
}
