/*
CH-230-A
a4 p5.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/




#include <stdio.h>
#include <ctype.h>

int count_consonants(char str[])
{
    int cnt=0;
    char *ptr =str;
    while (*ptr !='\0')
    {
        char c = tolower(*ptr);
        if ((c >='a'&&c <='z')&&(c!='a'&&c!='e'&&c!='i'&& c!='o'&&c!='u'))
        {
            cnt++;
        }
        ptr++;
        //we check if the character is a consonat
    }
    return cnt;
}

int main()
{
    char prop[101];
    // i need to declar 101 so the null is different
    while (1)
    {
        if (fgets(prop,sizeof(prop),stdin)==NULL || prop[0]== '\n')
    {
            break;
    }
    //if the size is null we break and stop the program
        printf("Number of consonants: %d\n",count_consonants(prop));
    }
    return 0;
}
