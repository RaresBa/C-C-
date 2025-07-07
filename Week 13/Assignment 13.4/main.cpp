/*
   CH-230-A
   a13_p4.cpp
   Stefan Rares Baiasu
   sbaiasu@jacobs-university.de
*/

#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
//problem 1
class B: virtual public A
{
public:
  B()  { setX(10); }
};
//problem 2
class C:  virtual public A  
{
public:
  C()  { setX(20); }
};
 
class D: public B, public C {
};
 
int main()
{
    /*
    The error was acouring at the "d.print" command because
    there was no "vitrutal" at class B and C for public A 
    where there was the print() method.

    The solution that I found is just to add "virtual".
    */
    D d;
    d.print();
    return 0;
}