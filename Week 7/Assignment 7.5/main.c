

/*
CH-230-A
a7 p5.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int ascending(const void *a, const void *b)
{
    return(*(int *)a - *(int *)b);
}
//this functions sorts the numbers ascending

int descdending(const void *a, const void *b)
{
    return(*(int *)b - *(int *)a);
}
//this function sorts the numbers descending



int main()
{
    int n;
  
    while(1)
    {
    scanf("%d",&n);

    int *arry=(int *)malloc(n*sizeof(int));
    //i allocate the memory for the array

    for(int i=0;i<n;i++)
        {
        scanf("%d", &arry[i]);
        }
    //i scan each element of the array
        char ch;
        scanf(" %c", &ch);
        
        
        switch(ch)
        {
            case'a':
            {
                qsort(arry,n,sizeof(int),ascending);
                break;
                //if a is presed than the string is sorted ascending
            }
            case'd':
            {
                qsort(arry,n,sizeof(int),descdending);
                break;
                //if d is presed than the string is sorted descending
            }
            case'e':
            {
                free(arry);
                return 0;
            }
            //if e is presed than the program stops
        }

        for(int i=0;i<n;i++)
        {
            printf("%d",arry[i]);
            if(i<n-1)
            {
                printf(" ");
            }
        }
        printf("\n");
        free(arry);
    }
    return 0;
}