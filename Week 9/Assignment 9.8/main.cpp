/*
   CH-230-A
   a9_p8.cpp
   Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/



#include <iostream>
#include <climits>

using namespace std;
void subtract_max(int array[], int n)
{
    int maxi=1000000;
    for(int i=0;i<n;i++)
    {
       if(array[i]>maxi) 
       {
        maxi=array[i];
       }

       for(int i=0;i<n;i++)
       {
        array[i]=array[i]-maxi;
       }
    }
    //I check the maximum value of the numbers in the array
    //Than i substract it from each element
}

void deallocate(int x[])
{
    delete[] x;
}
//The function for dfeallocating the memmory

int main()
{
    int n;
    int *array;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    //Reading n elements
    subtract_max(array,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    //Printing n elements
    deallocate(array);
    return 0;
}