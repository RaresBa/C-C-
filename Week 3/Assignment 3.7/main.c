/*
CH-230-A a3 p7.c
Rares Ilin
rilin@jacobs-university.de
*/
#include <stdio.h>
void print_form(int n, int m, char c)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m+i;j++)
        {
           printf("%c",c);
        }
        printf("\n");
    }
}
int main()
{
    char z;
    int x,y;
    scanf("%d\n", &x);
    scanf("%d\n", &y);
    scanf("%c\n", &z);
    print_form(x,y,z);
    return 0;
}
