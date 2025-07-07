


/*
CH-230-A
a4 p8.c
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
    //we read the array
    printf("The entered matrix is:\n");
    for(int m=0;m<n;m++)
    {
        for(int l=0;l<n;l++)
        {
            printf("%d ",array[m][l]);
        }
        printf("\n");
    }
    //we print it by how it was read in the begging
    printf("Under the secondary diagonal:\n");
    for(int e=0;e<n;e++)
        {
            for(int s=0;s<n;s++)
            {
                if(e+s>n-1)
                printf("%d ",array[e][s]);
            }
        }
        printf("\n");
        //we get the second diagonal at from adding the rows and collams
    return 0;
}
