
/*
CH-230-A
a9 p2.cpp
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/

#include <iostream>

using namespace std;

int main()
{
    int n;//I read the integer
    double x;//I read the double
    string s;//I read the string
    cin>>n;
    cin>>x;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        cout<<s<<":"<<x<<endl;
        //I print n times the string and the double
    }
    return 0;

}