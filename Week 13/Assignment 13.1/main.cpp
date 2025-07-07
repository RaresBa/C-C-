/*
CH-230-A
a13 p1.cpp
Stefan Rares Baiasu
sbaiasu@jacobs-university.de
*/



#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    cout<<"What is the name of your file?"<<endl;

    //I get the name of the file:
    string inputname;
    cin>>inputname;

    //I open the input and output files:
    ifstream inputFile(inputname);

    //I add the "_copy" to the file name and create the file name:
    size_t position;
    position=inputname.find_last_of(".");
    string outputname;
    outputname=inputname.substr(0,position)+"_copy"+inputname.substr(position);

    //I open the output file:
    ofstream outputFile(outputname);

    //I put all the content in the copy file:
    char content;
    while(inputFile.get(content))
    {
        outputFile.put(content);
    }

    //I close both the input and output file:
    inputFile.close();
    outputFile.close();

    return 0;
}