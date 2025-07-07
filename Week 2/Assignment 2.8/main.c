/*
CH-230-A
a2 p9.c
Rares Stefan Biasu
sbaiasu@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char a;
    scanf("%c",&a);getchar();
    if(isdigit(a))
    {
        printf("%c is a digit\n",a);// I check to see if it is a number
    }else
    if(isalpha(a))
    {
        printf("%c is a letter\n",a);// I check it it's a big letter
    }else
    if(islower(a))
    {
        printf("%c is a letter\n",a);// I check it it's a small letter
    }
    else
    {
        printf("%c is some other symbol\n",a);// if it is not both of them than it can only be a symbol
    }
    return 0;
}
