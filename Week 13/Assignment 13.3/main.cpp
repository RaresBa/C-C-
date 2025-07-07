/*
   CH-230-A
   a13_p3.cpp
   Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main()
{
    //The output file:
    ofstream fout("concatn.txt",ios::binary);


    string s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        //The input file:
        ifstream fin(s,ios::binary);
        //Getting the lenght of the file:
        fin.seekg(0,fin.end);
        int l;
        l=fin.tellg();
        fin.seekg(0,fin.beg);

        //Buffer allocation:
        char* bufffer=new char[l];
        
        /*
            Reading the input from the input file 
            Outputting into the output file
        */
        fin.read(bufffer,l);
        fout.write(bufffer,l);
        fout.write("\n",1);
        fin.close();
        
        //Freeing the memmory:
        delete[] bufffer;
    }
    //Closing the file:
    fout.close();
    return 0;
}