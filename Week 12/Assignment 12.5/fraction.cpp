
/*
   CH-230-A
   a12_p4.cpp
   Stefan Baiasu Rares
   sbaiasu@jacobs-university.de
*/


#include <iostream>
#include "fraction.h"

using namespace std;

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1, rest;

    a=abs(a);
    b=abs(b);
    while(b!=0)
    {
        rest=a%b;
        a=b;
        b=rest;
    }
    tmp_gcd=a;
    return tmp_gcd;
	// Implement GCD of two numbers;

}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

void Fraction::print()
{
	std::cout << num << "/" << den << std::endl;
}

//The "<<":
ostream& operator<<(ostream& out,const Fraction& a)
{
	out<<a.num<<"/"<<a.den<<endl;
	return out;
}

//The "">>":
istream& operator>>(istream& in, Fraction& a)
{
	int tmp_gcd;
	in>>a.den>>a.num;
	tmp_gcd= a.gcd(a.num,a.den);
	a.num=a.num/tmp_gcd;
	a.den=a.den/tmp_gcd;
	return in;
}

//The "*":
Fraction Fraction::operator*(const Fraction& a)
{
	Fraction result(num*a.num,den*a.den);
	int tmp_gcd=gcd(result.num,result.den);
	result.den=result.den/tmp_gcd;
	result.num=result.num/tmp_gcd;
	if(result.num<0&&result.den<0)
		{
			result.num=abs(result.num);
			result.den=abs(result.den);
		}
	return result;
}

//The "/":
Fraction Fraction::operator/(const Fraction& a)
{
	Fraction result;
	result.num=num* a.den;
	result.den=den* a.num;
	if(result.den!=0)
	{
	int tmp_gcd = gcd(result.num,result.den);
	result.num=result.num/tmp_gcd;
	result.den=result.den/tmp_gcd;
	if(result.num<0&&result.den<0)
		{
			result.num=abs(result.num);
			result.den=abs(result.den);
		}
	return result;
	}
    else
    {
        return 0;
    }
}

//The "+":
Fraction Fraction::operator + (const Fraction& a)
{
	Fraction result;
	result.num = num*lcm(den,a.den)/den+a.num*lcm(den,a.den)/a.den;
	result.den=lcm(den,a.den);

	//simplify the result
	int tmp_gcd = gcd(result.num,result.den);
	result.num=result.num/tmp_gcd;
	result.den=result.den/tmp_gcd;

	return result;
}

//The "-":
Fraction Fraction::operator - (const Fraction& a)
{
	Fraction result;
	result.num=num*lcm(den,a.den)/den-a.num*lcm(den,a.den)/a.den;
	result.den=lcm(den,a.den);

	//simplify the result
	int tmp_gcd = gcd(result.num,result.den);
	result.num=result.num/tmp_gcd;
	result.den=result.den/tmp_gcd;

	return result;
}
//The "=":
Fraction& Fraction::operator=(const Fraction& a)
{
	this->num= a.num;
	this->den= a.den;
	return *this;
}
//The "<":
bool Fraction::operator < (const Fraction& a)
{
	if (num*a.den<den*a.num)
		return 1;
	else
		return 0;
}

//The ">":
bool Fraction::operator > (const Fraction& a)
{
	if (num*a.den>den*a.num)
		return 1;
	else
		return 0;
}

