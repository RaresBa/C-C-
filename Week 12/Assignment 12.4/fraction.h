
/*
   CH-230-A
   a12_p4.cpp
   Stefan Baiasu Rares
   sbaiasu@jacobs-university.de
*/// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

using namespace std;

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
	void print();				// prints it to the screen

    //The overloading "<<" friend function:
    friend ostream& operator <<(ostream&,const Fraction&);
    //The overloading ">>" friend functions:
    friend istream& operator >>(istream&,Fraction&);

    //The overloading "*":
    Fraction operator*(const Fraction&);
    //The overloading "/":
    Fraction operator/(const Fraction&);
};


#endif /* FRACTION_H_ */