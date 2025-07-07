
/*
CH-230-A
a5 p3.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/



#include <stdio.h>
#include <string.h>
int count_lower(char* str)
{
    int cnt=0;
    while(*str != '\0')
        // i do it until it finished the string
    {
        if(*str >= 'a' && *str <= 'z')
            // i check if it a small character
        {
            cnt++;
        }
         str++;
         //we move the pointer to the next char
    }

    return cnt;
}
int main()
{

    char string[101];
    int n=0;
    while(1)
    {
        fgets(string,sizeof(string),stdin);
        // the function reads the string and the size of it
        string[strcspn(string, "\n")] = '\0';

        if (strcmp(string, "stop") == 0)
        {
            break;
        }
        //when stop its found it stops

        n=count_lower(string);
        printf("%d",n);
    }
    return 0;
}
