


/*
CH-230-A
a5 p4.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/




#include <stdlib.h>
#include <stdio.h>
void divby5(float arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        arr[i]=arr[i]/5.0;
    }
    //we take each element of the array and divide it by 5.0
    //so we get the float
}

int main()
{
    int size=6;
    float *arr=(float *)malloc(size*sizeof(float));
    //i allocate the memory based on the size
    arr[0] = 5.5;
    arr[1] = 6.5;
    arr[2] = 7.75;
    arr[3] = 8.0;
    arr[4] = 9.6;
    arr[5] = 10.36;
    printf("Before:\n");
    for(int i=0;i<size;i++)
    {
        printf("%.3f ",arr[i]);
    }
    //i print the array
    printf("\n");
    divby5(arr,size);
    printf("After:\n");
    for(int j=0;j<size;j++)
    {
        printf("%.3f ",arr[j]);
    }
    printf("\n");
    // i print the new array
    free(arr);
    // i free the memoru
    return 0;
}
