#ifndef City_H_
#define City_H_


using namespaces std;

class City
{
    private:

    std::string primarname;
    double area;
    int locuitori:

    public:
    City();
    City(const City&);
    City(std::string, double ,int);
    ~City();

    void print();

    void setPrimarName(std::string );
    void setArea(double );
    void setLocuitori(int );

    std::string getPrimarName();
    double getArea();
    int getLocuitori();

    void print();

    City operator +(const City);
    City operator -(const City);
    City operator *(const City);
    City operator /(const City);
    City& operator =(const City);

    friend std::istream&, operator >>(istream& in, City&)
    friend std::ostream&,operator <<(ostream& out,const City&);



};
#endif