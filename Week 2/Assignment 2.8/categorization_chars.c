/*
CH-230-A
a2 p9.c
Rares Stefan Biasu
sbaiasu@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("Please enter a character: ");
    scanf("%c",&a);getchar();
    if(a>='0' && a<='9')
    {
        printf("The character is a number");// i check to see if a contains digits from 0 to 9,every number >=10 has
    }else
    if(a>='a'&& a<='z' || a>='A'&& a<='Z')
    {
        printf("The character is a letter");// i check it it's a letter or a world
    }
    else
    {
        printf("The character is a symbol");// if it is not both of them than it can only be a symbol
    }
    return 0;
}
