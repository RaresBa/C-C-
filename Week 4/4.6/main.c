
/*
CH-230-A
a6 p1.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/




#include <stdio.h>
#include <stdlib.h>

void findTwoGreatest(int *arr, int n)
{
    int max1=-10000,max2=-10000;
    for (int i=0;i<n;i++)
    {
        if (arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }
        //we check if the number in pos 1 is bigger than max1
        // then max1 becomes the array
        else
        if(arr[i]>max2 && arr[i]!=max1)
        {
            max2=arr[i];
        }
        //we also check here if the pos of arr is bigger than max2
        //and we check if max2=max1
    }
    printf("The two greatest values are: %d and %d\n",max1,max2);
}

int main()
{
    int n;
    printf("How many elements? ");
    scanf("%d", &n);
    int *arr =(int *)malloc(n* sizeof(int));
    //i allocate the memorry
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
     {
        scanf("%d", &arr[i]);
    }
    findTwoGreatest(arr, n);
    //we call the function
    return 0;
}
