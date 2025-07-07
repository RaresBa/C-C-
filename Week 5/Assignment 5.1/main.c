/*
CH-230-A
a5 p1.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/




#include <stdio.h>
#include <stdlib.h>
void triangle(int n, char ch)
{
    for(int i=n;i>=1;i--)
    //i make a for starting from n, until 1 every time i lovers by 1
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c", ch);
        }
    //i print the character j times(which is equal to i)
        printf("\n");
    }
}
int main()
{
    int n;
    char ch;
    scanf("%d",&n);
    scanf(" %c",&ch);
    getchar();
    triangle(n,ch);
    return 0;
}
