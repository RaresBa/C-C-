
/*
CH-230-A
a4 p11.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/




#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int count_insensitive(char *str, char c)
{
    int cnt=0;
    char c_lower=tolower(c);
    //we convert the characters in low chars
    for (int i=0;str[i]!='\0';i++)
    {
        if (tolower(str[i])==c_lower)
        {
            cnt++;
            // if the character is found the cnt reises by one
        }
    }
    return cnt;
}

int main()
{
    int length = 0;
    char *str=(char *)malloc(51);
    char *noustr=(char *)malloc(length+1);
    char characters[]={'b', 'H', '8', 'u', '$'};
    //these are the symbols we are searching for

    scanf("%50s", str);


    while (str[length]!='\0')
    {
        length++;
    }
    //we get the lenght of the string

    for(int i=0;i<length;i++)
    {
        noustr[i]=str[i];
    }


    noustr[length]='\0';
    free(str);
    //i free the memory of the string

    for (int i=0;i<sizeof(characters)/sizeof(characters[0]);i++)
    {
        int cnt;
        cnt=count_insensitive(noustr,characters[i]);
        printf("The character '%c' occurs %d times.\n",characters[i],cnt);
    }
    //we count every character that we search for in the string

    return 0;
}
