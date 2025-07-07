/*
CH-230-A
a8 p7.c
Baiasu Stefan Rares
sbaiasu@jacobsuniversity.de
*/





#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[999999];
    FILE *file1,*file2,*merge12;

    //I open all the files in read only mode
    file1=fopen("text1.txt","r");
    file2=fopen("text2.txt","r");
    merge12=fopen("merge12.txt","r");


    //I read all the strings/lines and put them into the merge file
    //from first file1 than file2
    while(fgets(c,sizeof(c),file1)!=NULL)
    {
        fputs(c,merge12);
    }
    while(fgets(c,sizeof(c),file1)!=NULL)
    {
        fputs(c,merge12);
    }


    //I close all the files
    fclose(file1);
    fclose(file2);
    fclose(merge12);
    
    return 0;
}