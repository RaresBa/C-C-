
/*
CH-230-A
a9 p7.cpp
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/

#include <iostream>
#include <cstring>



using namespace std;
//I use the var schimb as a copy to not lose the value
void swapping(int x, int y) 
{
    int schimb;
    schimb=x;
    x=y;
    y=schimb;

} // swap ints


//I use the var schimb as a copy to not lose the value
void swapping(float x, float y) 
{ 
    int schimb;
    schimb=x;
    x=y;
    y=schimb;
} 
// swap floats

//I use the var schimb as a copy to not lose the value
void swapping(const char *&str1, const char *&str2) 
{ 
    const char *schimb;
    schimb=str1;
    str1=str2;
    str2=schimb;
} // swap char pointers

int main(void) 
{
int a = 7, b = 15;
float x = 3.5, y = 9.2;
const char *str1 = "One";
const char *str2 = "Two";
cout << "a=" << a << ", b=" << b << endl;
cout << "x=" << x << ", y=" << y << endl;
cout << "str1=" << str1 << ", str2=" << str2 << endl;
swapping(a, b);
swapping(x, y);
swapping(str1, str2);
cout << "a=" << a << ", b=" << b << endl;
cout << "x=" << x << ", y=" << y << endl;
cout << "str1=" << str1 << ", str2=" << str2 << endl;
return 0;
}
