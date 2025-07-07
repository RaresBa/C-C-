/*
   CH-230-A
   a10_p7.cpp
   Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/



#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

/*
	Naive string: the goal is to illustrate how copy constructors 
	should be handled. See also charbuffer.cpp
*/

class NaiveString {
private:
	char *str;
public:
	NaiveString(const char*);
	NaiveString(const NaiveString&);
	void update(char, char);
	void print();

    
    ~NaiveString();
};

    //The destractor that is used for dealocating the memory
    NaiveString::~NaiveString()
    {
        delete []str;
        cout<<"The memory has been dealocated with the help of the Destructor";
    }
NaiveString::NaiveString(const char* t) {
	str = new char[strlen(t) + 1];
	strcpy(str, t);
}

/* 
	Copy constructor: creates a new instance of 
	naive string starting from an existing one 
*/


NaiveString::NaiveString(const NaiveString& src) {
	str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
	// please note that we can access src.str even if it is private
	// as we are inside the NaiveString class
}

/* replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar) {
	unsigned int i;
	for (i = 0; i < strlen(str); i++) 
		if (str[i] == oldchar)
			str[i] = newchar;
}

void NaiveString::print() {
	cout << str << endl;
}

void funcByVal(NaiveString s) {
	cout << "funcbyval() being called" << endl;
	s.update('B', 'C');
	s.print();
}
void funcByref(NaiveString s)
{
    cout<<"funcByref() is being called"<<endl;
    s.update('B','C');
    s.print();
}
int main(int argc, char** argv)
{
    //The first string 
	NaiveString a("aBcBdB");
	a.print();
	cout << "About to call funcbyval()" << endl;
	funcByVal(a);
	a.print();
    

    //The second string using the destractor I created
    NaiveString b("aBcBdB");
    b.print();
    cout << "About to call funcByref()" << endl;
    funcByref(b);
    b.print();

}