
/*
CH-230-A
a9 p4.cpp
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/

#include <iostream>

using namespace std;
int mycount(int a, int b)
{
    return b-a;
}
//the first function for a normal difference
int mycount(char a, string b)
{
    unsigned int cnt=0;
    for(int i=0;i<b.size();i++)
    {
        if(b[i]==a)
        {
            cnt++;
        }
        //if i fint the char the counter increases by 1
    }
    return cnt;
}
//the function which searches for the char in a string
int main() 
{
    cout<<"Mycount function for the difference of two numbers: "<<mycount(7,3)<<endl;
    cout<<"Mycount function for the string and char: "<<mycount('h',"hello world")<<endl;
    return 0;
}