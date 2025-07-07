/*
CH-230-A
a3 p5.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/













#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int n;
    double temperatures[100];
    printf("Please enter what the program should do\n");
    scanf("%c", &c);
    printf("Please enter how many temperatures you would like to enter \n");
    scanf("%d", &n);
    printf("Please enter the temperatures \n");
    for(int i=0;i<n;i++)
    {
        scanf("%lf", &temperatures[i]);
    }// we get n temperatures
    switch(c){
    case 's'://when s is typed
    {
        double suma=0;
        for(int j=0;j<n;j++)
        {
            suma=suma+temperatures[j];// tnis the sum
        }
        printf("The sum of the temperatures is: %lf", suma);
        break;
    }
    case 'p'://when p is typed
    {
        for(int l=0;l<n;l++)
        {
            printf("%lf", temperatures[l]);// we print all temp
        }
        break;
    }
    case 't'://when t is typed
    {
        for(int p=0;p<n;p++)
        {
            printf("%lf\n",(temperatures[p]*9)/5+32);// the convert to F
        }
        break;

    }
    default://when something else is typed
    {
            double mean=0;
        for(int m=0;m<n;m++)
        {
            mean=mean + temperatures[m];// the mean of the temp
        }
        mean=mean/n;
        printf("%lf", mean);
    }
    }
    return 0;
}
