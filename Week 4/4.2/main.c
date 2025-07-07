


/*
CH-230-A
a4 p2.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[51];
    int i=0;
    fgets(str,sizeof(str),stdin);
    //we get the size of the string
    while(str[i]!= '\0')
    {
        if(str[i]!=' ' && str[i]!= '\n')
        {
            if(i%2==0)
            {
                printf("%c\n",str[i]);
                //if the position of the character is not
            }else
            printf(" %c\n",str[i]);
        }else
        printf("\n");
        i++;
    }
    return 0;
}
