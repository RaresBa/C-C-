

/*
CH-230-A
a9 p6.cpp
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;
int myfirst(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(a[i]>0 && a[i]%2==0)
        {
            return a[i];
        }
        //I check if the number is higher than 0 and divisible by 2
    }
    return -1;
}
double myfirst(double a[],int size)
{
    double p;
    for(int i=0;i<size;i++)
    {
        if(a[i]<0 && modf(a[i],&p)==0)
        {
            return a[i];
        }
        //I check if the number is lower than 0 
    }
    return -1.1;
}
char myfirst(string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(isalpha(s[i]))
        {
            if(!(strchr("aeiouAEIOU",s[i])))
                return s[i];
        }
    }
    //I check if the char is a consonat by checking if it's not a vocal
    return '0';
}

int main()
{
    int a[]={0,1,2,3,4};
    double b[]={-2.34,-3.45,7.123};
    string s="helloworld";
    //the test cases
    cout<<myfirst(a,sizeof(a)/sizeof(a[0]))<<endl;
    cout<<myfirst(b,sizeof(b)/sizeof(b[0]))<<endl;
    cout<<myfirst(s)<<endl;
    return 0;
}