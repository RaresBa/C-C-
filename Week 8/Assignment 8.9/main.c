/*
CH-230-A
a8 p7.c
Baiasu Stefan Rares
sbaiasu@jacobsuniversity.de
*/





#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 64

int main()
{
    int n;
    scanf("%d", &n);

    char buffer[BUFFER_SIZE];
    size_t bytesRead;

    //I open the output file in binary writing mode
    FILE *output=fopen("output.txt","wb");

    for(int i=0;i<n;i++)
    {
        char name[100];
        printf("%d",i+1);
        scanf("%s",name);

        //I open the input file in binary reading mode
        FILE *input=fopen(name,"rb");

         //I read and concanate the words from every file
        while((bytesRead=fread(buffer, 1,BUFFER_SIZE,input))>0)
        {
            fwrite(buffer,1,bytesRead,output);
             //I concatanate in the resultfile
        }

        fclose(input);

        //I put a newline between every files
        if(i<n-1)
        {
         fwrite("\n",1 ,1, output);
        }

    }
    
    //I close the output file
    fclose(output);


    //I print the result
    printf("The result is:\n");

    //I open the file in binary read
    FILE *resultfile=fopen("output.txt","rb"); 

    //I read and concanate the words from every file
    while((bytesRead=fread(buffer, 1 ,BUFFER_SIZE,resultfile))>0)
    {
        fwrite(buffer,1,bytesRead,stdout);
        //I concatanate in the resultfile
    }
    
    printf("The result was written into output.txt.\n");

    //I close the file
    fclose(resultfile);
    return 0;
}
