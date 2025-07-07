/*
CH-230-A
a8 p7.c
Baiasu Stefan Rares
sbaiasu@jacobsuniversity.de
*/





#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//I check to see if the words are separetd by the
//specific chars
bool checkdelimiter(char c)
{
    char del[]=" ,?!.\t\r\n";
    for(int i=0;del[i]!='\0';i++)
    {
        if(c==del[i])
        {
            return true;
        }
    }
    return false;
}

int main(int arg, char *argv[100])
{
    int cnt=0,ch;
    bool w=false;
    char *nume=argv[1];

    //I open the file using the nam,e
    FILE *file=fopen(nume,"r");

    while((ch=fgetc(file))!=EOF)
    {
        //I check if the character is one in the list
        //using the function checkdelimter
        if(!checkdelimiter((char)ch))
        {
            //if the charcter is not ,?!.\t\r\n than the counter
            //that counts the words increses by 1
            if(!w)
            {
                w=true;
                cnt++;
            }
        }else
            w=false;
    }
    
    printf("The file contains %d words.\n", cnt);
    
    //I close the file
    fclose(file);
}