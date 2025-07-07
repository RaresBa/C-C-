/*
   CH-230-A
   a11_p6.cpp
   Stefan Baiasu Rares
   sbaiasu@jacobs-university.de
*/







#include "Vector.h"
#include <iostream>
#include <cmath>
using namespace std;

//Default constructor:
Vector::Vector()
{
	size=0;
	v=nullptr;
}
//The constructor:
Vector::Vector(int nsize, double* vec)
{
	size=nsize; 
	v=new double[size];
	for(int i=0;i<size;i++)
		v[i]=vec[i];
}
//The destructor:
Vector::Vector(const Vector& vec)
{
	size=vec.size;
	v=new double[size];
	for(int i=0;i<size;i++)
		v[i]=vec.v[i];
}
//The destructor:
Vector::~Vector()
{
	delete [] v;
}

//The getters:
int Vector::getSize() const
{
	return size;
}
//The getters:
double* Vector::getPointer() const
{
	return v;
}
//The setters:
void Vector::setPointer(double* point)
{
	int i=0;
	while((point+i)!=NULL)
	{
		*(v+i)=*(point+i);
		i++;
	}

}
//The setters:
void Vector::setSize (int nsize)
{
	double* aux;
	aux= new double[nsize];
	int i;
	for(i=0;i<nsize;i++)
		aux[i]=0;
	for(i=0;i<size;i++)
		aux[i]=v[i];
	delete [] v;
	v= new double[nsize];
	for(i=0;i<nsize;i++)
		v[i]=aux[i];
	if(size<nsize)
		for(i=size;i<nsize;i++)
			v[i]=0;
	delete []aux;
	size=nsize;
}
//The printers:
void Vector::printVector() const
{
	int i;
	for(i=0;i<size;i++)
		cout<<v[i]<<" ";
	cout<<endl;
}
double Vector::norm ()
{
	double nrm=0;
	int i;
	for(i=0;i<size;i++)
		nrm=nrm+v[i]*v[i];
	nrm=sqrt(nrm);
	return nrm;
}
//The adding:
Vector Vector::add(const Vector& a) const
{ 
	int i;
	Vector s;
	s.size=size;
	s.v= new double[size];
	for(i=0;i<size;i++)
		s.v[i]=v[i]+a.v[i];
	return s;
}
//The difference
Vector Vector::diff(const Vector& a) const
{
	Vector s;
	int i;
	s.size=size;
	s.v= new double [size];
	for(i=0;i<size;i++)
		s.v[i]=v[i]-a.v[i];
	return s;
}
//The scallar:
double Vector::scalar(const Vector& a)
{
	double sc=0;
	int i=0;
	for(i=0;i<size;i++)
		sc=sc+v[i]*a.v[i];
	return sc;
}