
/*
CH-230-A
a9 p9.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>
int prodminmax(int arr[], int n) {
    int min=arr[0],max=arr[0],p=1;
    for (int i=1;i<n;i++)
     {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        //we check for the min
        if(arr[i]>max)
        {
            max=arr[i];
        }
        //we check for the max
    }
    p=min*max;
    return p;
}

int main()
{
    int n,result;
    printf("How many numbers? ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    //i allocate the memory
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //i read n numbers
    result=prodminmax(arr, n);
    //call the function for the product
    printf("The product is: %d\n", result);
    return 0;
}
