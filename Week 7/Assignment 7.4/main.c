


/*
CH-230-A
a7 p4.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/




#include <stdio.h>
#include <ctype.h>
#include <string.h>

void uppercase(const char *str)
{
    while(*str)
    {
        putchar(toupper(*str));
        str++;
    }
    printf("\n");
}
//this function prints the string in all uppercase



void lower(const char *str)
{
    while(*str)
    {
        putchar(tolower(*str));
        str++;
    }
    printf("\n");
}
//this function prints the string in all lowercases



void swap(const char  *str)
{
    while(*str)
    {
        if(islower(*str))
        {
            putchar(toupper(*str));
        }else
        {
            putchar(tolower(*str));
        }
        str++;
    }
    printf("\n");
}
// this function checks if a characher from the string is in lowercase
//if it is, it turns it into uppercase. if it is not lowercase
//the program will turn it into lowercase



int main()
{
    char in[100];
    char n;
    fgets(in, sizeof(in),stdin);
    //i get the size of the input and read it
    in[strcspn(in, "\n")] = '\0'; 
    //remove the newline character
    while(1)
    {
        scanf(" %c", &n);
        switch(n)
        {
            case '1':
            {
                uppercase(in);
                break;
            }
            //if one is presed than use uppercase function
            case '2':
            {
                lower(in);
                break;
            }
             //if two is presed than use lower function
            case '3':
            {
                swap(in);
                break;
            }
             //if three is presed than use swap function
            case '4':
           {
            return 0;
            //if four is presed stop the program
           }
        }
    }
    return 0;
}
