/*
   CH-230-A
   a13_p8.cpp
   Stefan Rares
   sbaiasu@jacobs-university.de
*/

#include <iostream>
#include <cstring>

using namespace std;


//The Motor class:
class Motor
{
    private:
        string motorul="This motor has a problem";
    public:
        //The throw of an instance I called "motorul":
        Motor()
        {
            throw motorul;
        }
};

//The Car class:
class Car
{  
    private:
        Motor *the_car;
    public:
        //The instance of a car
        Car()
        {
            the_car=new Motor();
        }
};

//The Garage class:
class Garage
{
    private:
        Car *car;
    public:
        //The instante of a car in the garage
        Garage()
        {
            try
            {
                car=new Car();
            }
            catch(string& cerinta)
            {
                string s;
                s="The car in this garage has problems with the motor";
                throw s;
            }
            
        }
};
int main()
{
    //I try to create a garage instance
    try
    {
       Garage garage;
    }
    catch(string& cerinta)
    {
        cout<<cerinta<<endl;
    }
    //If it is not possible we print that the motor has problems
    return 0;
}