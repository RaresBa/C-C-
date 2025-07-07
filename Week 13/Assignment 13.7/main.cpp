/*
   CH-230-A
   a13_p7.cpp
   Stefan Rares Baiasu
   sbaiasu@jacobs-university.de
*/

#include <iostream>

using namespace std;

//The OwnException class with the exception extending:
class OwnException : public exception
{
    private:
        string name;
    
    public:
        //The default constructor:
        OwnException(string &x)
        {
            name=x;
        }
        const char * what() const noexcept
        {
            return "OwnException\n";
        }
};

//The function that definies the cases:
void simple_different_execptions(int n)
{
    if(n==1)
    {
        throw 'a';
    }else if(n==2)
    {
        throw 12;
    }else if(n==3)
    {
        throw true;
    }else
    {
        string def;
        def="Default case exception";
        throw OwnException(def);
    }
}

int main()
{
    //We use the simple different exceptions function:
    for(int i=1;i<=4;i++)
    {
        try 
        {
            simple_different_execptions(i);
        }
        catch(char n)
        {
            cerr<<"Cought in main: "<<n<<endl;
        }
        catch(int n)
        {
            cerr<<"Cought in main: "<<n<<endl;
        }
        catch(bool n)
        {
            cerr<<"Cought in main: "<<n<<endl;
        }
        catch(OwnException& n)
        {
            cerr<<"Cought in main: "<<n.what()<<endl;
        }
    }
    return 0;
}
