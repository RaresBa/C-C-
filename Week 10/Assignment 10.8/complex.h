/*
   CH-230-A
   a10_p8.cpp
    Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/

class Complex
{
    //The private part of the class that the user can not see
    private:

    double real,imaginar;
    
    //The public part of the class that the user can see
    public:

    //The Constructor:
    Complex();
    Complex(double real, double imaginar);
    Complex(const Complex&);

    //The Destructor:
    ~Complex();


    //Setters:
    void setReal(double real);
    void setImaginar(double imaginar);
    void print();

    //Getters:
    double getReal();
    double getImaginar();

    //The operations made for the complex commands
    Complex conjugate();
    Complex suma(Complex);
    Complex diferenta(Complex);
    Complex multi(Complex);
};