
/*
CH-230-A
a3 p1.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/




#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float x;
    scanf("%f", &x); // i read x as a float
    while(1)
    {
        scanf("%d", &n); // i read n
        if(n<=0) // if n is not an intiger i print the message
        {
            printf("Input is invalid, reenter value\n");
        }else{// if n it's an intigerer i stop the infinite loop of checking and go to the printing
            break;
        }
    }
    for(int i=0;i<n;i++){ // i printing the float n time
        printf("%f\n", x);
    }
    return 0;
}
