/*
CH-230-A  a3 p8.c
Ilin Rares Alexandru
rilin@jacobs-university.de
*/
#include <stdio.h>
float sum(float number[], int cnt)
{
    double s=0;
    for (int i=0;i<cnt;i++)
    {
        s=s+number[i];
    }
    return s;
}
float mean(float number[], int cnt)
{
    float s=0;
    for (int i=0; i<cnt;i++)
    {
        s=s+number[i];
    }
        return s/cnt;
}
int main()
 {
    float numbers[10];
    int cnt,n;
    cnt=0
    while (cnt <10)
    {
        scanf("%lf", &n);
        if (n==-99.0)
        {
            break;
        }
        numbers[cnt]=n;
        cnt++;
    }
    float x,y;
    x=sum(numbers,cnt);
    y=mean(numbers,cnt);
    printf("%lf\n", x);
    printf("%lf\n", y);
    return 0;
}
