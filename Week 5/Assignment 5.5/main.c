
/*
CH-230-A
a5 p5.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/




#include <stdio.h>

void scalarProduct(int n, double v[], double w[])
{
    double result=0.0;
    for (int i=0;i<n;i++)
    {
        result=result+v[i]*w[i];
    }
    printf("Scalar product=%.6lf\n",result);
}
//here we add the the porduct bye the vectors to a result
void findSmallestLargest(int n, double v[], double w[])
{
    double v_smallest=v[0];
    double w_smallest=w[0];
    double v_largest=v[0];
    double w_largest=w[0];
    int v_smallest_pos=0;
    int w_smallest_pos=0;
    int v_largest_pos=0;
    int w_largest_pos=0;
    for (int i=1;i<n;i++)
    {
        if(v[i]<v_smallest)
        {
            v_smallest=v[i];
            v_smallest_pos=i;
        }
        //we dp the same comperison
        if(w[i]<w_smallest)
        {
            w_smallest=w[i];
            w_smallest_pos=i;
        }
        if(v[i]>v_largest)
        {
            v_largest=v[i];
            v_largest_pos=i;
        }
          //we do the same comperison
        if(w[i]>w_largest)
        {
            w_largest=w[i];
            w_largest_pos=i;
        }
        //we d0 the same comperison
    }
    printf("The smallest = %.6lf\n", v_smallest);
    printf("Position of smallest = %d\n", v_smallest_pos);
    printf("The largest = %.6lf\n", v_largest);
    printf("Position of largest = %d\n", v_largest_pos);
    printf("The smallest = %.6lf\n", w_smallest);
    printf("Position of smallest = %d\n", w_smallest_pos);
    printf("The largest = %.6lf\n", w_largest);
    printf("Position of largest = %d\n", w_largest_pos);
    // i output the same as in the test outputs
}

int main()
{
    int n;
    scanf("%d",&n);
    double v[n],w[n];
    for (int i=0;i<n;i++)
    {
        scanf("%lf",&v[i]);
    }// i scan the elements

    for (int i=0;i<n;i++)
    {
        scanf("%lf",&w[i]);
    }
    scalarProduct(n,v,w);
    findSmallestLargest(n,v,w);
    return 0;
}
