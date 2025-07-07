/*
CH-230-A
a4 p4.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/






#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int count_consonants(char str[])
{
    int cnt=0;
    char c;
    for(int i=0;str[i]!='\0';i++)
    {
       c=tolower(str[i]);
       if((c>='a'&&c<='z')&&(c!='a'&& c!='e' && c!='i' && c!='o'&& c!='u'&&c!='\n'&&c!=' '))
        cnt++;
    }
    //if the character from the string is a consonat the cnt rises by one
    return cnt;
    //we return cnt-1 so we dont get the null character
}
int main()
{
    char prop[101];
    while(1)
    {
        if(fgets(prop,sizeof(prop),stdin)==NULL || prop[0]=='\n')
        {
           break;
        }
        //if there is no charachter or a \n the program will stop
        printf("Number of consonants=%d\n",count_consonants(prop));
    }
    return 0;
}
