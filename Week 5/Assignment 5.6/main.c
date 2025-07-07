
/*
CH-230-A
a5 p6.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/

#include <stdio.h>

int main() {
    int length,cnt=0;
    scanf("%d", &length);
    float arr[length];
    for (int i=0;i<length; i++)
    {
        scanf("%f",&arr[i]);
    }// i scan the array and get the vallues
    float *ptr=arr;
    while (*ptr>=0&&cnt<length)
    {
        cnt++;
        ptr++;
    }
    //we check for the negative valuje
    printf("Before the first negative value: %d elements\n", cnt);
    return 0;
}
