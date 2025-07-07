
/*
CH-230-A
a3 p11.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/





#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char one[100],two[100],three[100],c;
    int comp;
    fgets(one,sizeof(one),stdin);
    //we read the first string
    fgets(two,sizeof(two),stdin);
    //we read the second string
    comp=strcmp(one,two);// this is the variable for comp
    one[strcspn(one, "\n")] = '\0';
    two[strcspn(two, "\n")] = '\0';
    scanf("%c",&c);
    printf("length1=%ld\n",strlen(one));
    //we get the length of first string
    printf("length2=%ld\n",strlen(two));
    //we get the length of the second string
    strcat(one, two);
    printf("concatenation=%s\n",one);
    strcpy(three,two);
    //we combine the first string and the third string
    printf("copy=%s\n",three);
    //here we compare
    if(comp<0)
    {
        printf("one is smaller than two\n");
    }else
    if(comp>0)
    {
        printf("one is larger than two\n");
    }else
    {
        printf("one is equal to two\n");
    }
    char *pos=strchr(two,c);
    if(pos!=NULL)
    {
        printf("position=%ld\n",pos-two);
    }else{

        printf("The character is not in the string\n");
    }
    return 0;
}
