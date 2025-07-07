/*
CH-230-A
a8 p5.c
Baiasu Stefan Rares
sbaiasu@jacobsuniversity.de
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    //I read an input file and an output file.
    FILE *infile, *outfile;
    char c1,c2;
    int suma=0;
    
    //I open both of the files, the input in read mode.
    //and the output file in writing mode.
    infile=fopen("chars.txt","r");
    outfile=fopen("codesum.txt","w");

    //I scan the first two characters from the file.
    fscanf(infile,"%c %c", &c1,&c2);


    suma=(int)c1+(int)c2;


    //I print the sum in the output file.
    fprintf(outfile,"%d\n",suma);



    //I close the both files.
    fclose(outfile);
    fclose(infile);
    
    return 0;
}