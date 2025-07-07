/*
   CH-230-A
   a13_p5.cpp
   Stefan Rares Baiasu
   sbaiasu@jacobs-university.de
*/

#include<iostream>

using namespace std;
 
class A
{
  int x;
public:
  A(int i) { x = i; }
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B():A(10) {  }
};
 
class C:  virtual public A 
{
public:
  C():A(10) {  }
};

//The Constructor for the explicit calls:
class D: public B, public C {
    public:
        D():A(10),B(),C()
        {

        }
};
 

/*

    When I try to run the program I get an error because a default
    constructor for the classA(A()) when creating the a constutor for D
    does not exist.
    To solve this problem I created a D() default construtor.

*/
int main()
{
    D d;
    d.print();
    return 0;
}