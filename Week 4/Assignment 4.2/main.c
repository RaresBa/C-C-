/*
CH-230-A
a4 p1.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/





#include <stdio.h>
int main ()
{
    char s[51];
    fgets (s,sizeof(s),stdin);
    // we read the size of the string with maximum 50
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]!= ' ' && s[i]!='\n')
        {
            printf("%c\n",s[i]);
        }
        //we printe each letters
    }
    return 0;
}