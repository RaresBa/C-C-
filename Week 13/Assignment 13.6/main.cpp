/*
   CH-230-A
   a13_p6.cpp
   Stefan Rares Baiasu
   sbaiasu@jacobs-university.de
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(20,8);
    //I try to acces the last element of the vector:
    try
    {
        v.at(20);
    }
    catch(out_of_range& h)
    {
        //The printing method for the error:
        cerr<<h.what()<<endl;
    }
    
    return 0;
}