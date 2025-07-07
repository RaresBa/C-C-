/*
CH-230-A
a4 p7.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/





#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[31][31];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    //we read the numbers of the array
    printf("The entered matrix is:\n");
    for(int m=0;m<n;m++)
    {
        for(int l=0;l<n;l++)
        {
            printf("%d ",array[m][l]);
        }
        printf("\n");
    }
    //we print as it was read from the keyboard
    printf("Under the main diagonal:\n");
    for(int e=1;e<n;e++)
        {
            for(int s=0;s<e;s++)
            {
                printf("%d ",array[e][s]);
            }
        }
    //the main diagonal its starting from 1
        printf("\n");
    return 0;
}
