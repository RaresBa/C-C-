


/*
CH-230-A
a4 p3.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float geometric_mean(float arr[], int num)
{
    float p=1.0;
    for(int i=0;i<num;i++)
    {
        p=p*arr[i];
    }
    return pow(p,1.0/num);
    //we calculate the geometric mean
}

float find_highest(float arr[], int num)
{
    float max=arr[0];
    for(int i=0;i<num;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
    //we check to see if the number from the array is bigger than the max
}

float find_lowest(float arr[], int num)
{
    float min=arr[0];
    for(int i=0;i<num;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
    //we check to see if the number from the arry is smaller then the minim
}

float find_sum(float arr[],int num)
{
    float s=0.0;
    for(int i=0;i<num;i++)
    {
        s=s+arr[i];
    }
    //for each number we add it to the sum
    return s;
}

int main()
{
    float arr[15],value;
    int num=0;
    printf("enter up to 15: \n");
    while(num<15)
    {
        scanf("%f",&value);
        if(value<0)
        {
            break;
        }
        //when a negative number is entered the program stops
        arr[num]=value;
        num++;
        //we read a maximum of 15 elements
    }
    char c;
    printf("What do you want to do?");
    scanf(" %c",&c);
    switch (c)
    {
        case 'm':
        {
            float m=geometric_mean(arr,num);
            printf("Geometric mean is: %lf", m);
        }
        // if the user enters m we calculate the geometric mean
        case 'h':
        {
            float max=find_highest(arr,num);
            printf("The highest number is: %lf", max);
        }
        //if the user enters h we find the highest number
        case 'l':
        {
            float min=find_lowest(arr,num);
            printf("The lowest number is: %lf",min);
        }
        //if the user enters l we find the lowest number
        case 's':
        {
            float s=find_sum(arr,num);
            printf("The sum is: %lf",s);
        }
        //if the user enters s we find the sum of the numbers in the array
    }
    return 0;
}
