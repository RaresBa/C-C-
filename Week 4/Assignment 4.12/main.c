/*
CH-230-A
a4 p12.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/




#include <stdio.h>
#include <string.h>

void replaceAll(char *str, char c, char e)
{
    int len=strlen(str);
    //we get the lenght
    for(int i=0;i<len;i++)
    {
        if(str[i]==c)
        {
            str[i]=e;
        }
        //we do the replacement
    }
}

int main()
{
    char input[81],toreplace,replace;
    while (1)
    {
        printf("Enter a string: ");
        scanf("%80s", input);
        //we read a string that is maximum 80 characters
        if(strcmp(input, "stop")==0)
        {
            break;
        }
        //when  the word stop is written the program stops
        printf("Enter what to replace: ");
        scanf("%c",&toreplace);
        printf("Enter the replacement: ");
        scanf("%c",&replace);
        replaceAll(input, toreplace, replace);
        printf("New string is: %s\n\n", input);
    }
    return 0;
}
