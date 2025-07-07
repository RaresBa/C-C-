
/*
CH-230-A
a3 p2.C
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/






#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch; // I read the character I will be using
    int n; // I read the intiger which I will use
    scanf("%c",&ch);
    scanf("%d", &n);
    for(int i=1;i<=n;i++) // I use the for so I can print the character -1 for n times
    {
        ch--;
        printf("%c\n", ch);
    }
    return 0;
}
