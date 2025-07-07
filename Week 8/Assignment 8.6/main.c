/*
CH-230-A
a8 p6.c
Baiasu Stefan Rares
sbaiasu@jacobsuniversity.de
*/




#include <stdlib.h>
#include <stdio.h>

int main()
{
    char name1[99],name2[99];
    double n1,n2,suma=0,diff=0,produs=0,div=0;
    

    //I read the name of the both files.
    printf("Enter the name of the first file: ");
    scanf("%s",name1);
    printf("Enter the name of the second file: ");
    scanf("%s",name2);


    //I creat and open the files using the names inputed by a user.
    //I open the last folder in writing mode so I can put the inputs in it.
    FILE *file1=fopen(name1,"r");
    FILE *file2=fopen(name2,"r");
    FILE *results=fopen("results.txt","w");


    //I take the double variable for the first and second file.
    fscanf(file1,"%lf",&n1);
    fscanf(file2,"%lf",&n2);

    suma=n1+n2;
    diff=n1=n2;
    produs=n1*n2;
    div=n1/n2;
    

    //I print the results in the "results file".
    fprintf(results,"The sum is: %lf\n",suma);
    fprintf(results,"The diff is: %lf\n",diff);
    fprintf(results,"The produs is: %lf\n",produs);
    fprintf(results,"The div is: %lf\n",div);


    //I close all the files.
    fclose(file1);
    fclose(file2);
    fclose(results);
    

    return 0;

}