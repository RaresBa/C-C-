/*
   CH-230-A
   a9_p9.cpp
   Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/




#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)))
    //the random number generator

    string words[] ={computer”, ”television”,”keyboard”, ”laptop”, ”mouse”,"cat","dog","car","pencil","garden","movie","animal","family","father","mother","game","education"};
    //the array of words

    int nwords=sizeof(nwords)/sizeof(nwords[0]);
    while(true)
    {   
        int incercari=0;
        int random=rand() % nwords;

        string choosenwords=words[randomIndex];
        string guess;

        for( char& letter: choosenwords)
        {
            if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') 
            {
              letter = '_';  
            }

        }

        while(guess != words[randomIndex])
        {
            cout<<"The word to guess is:"<<choosenwords<<endl;
            cout<<"Enter your guess:"<<endl;
            cin>>guess;
            incercari++;
            if(guess="quit")
            {
                cout<<"Quitting the game"<<endl;
            }
            if(guess != words[randomIndex])
            {
                cout<<"Try another guess:"<<endl;
            }
    
        }
        cout<<"You guessed the word in " << incercari<<endl;
        cout<<"Do you want to play again?: (yes/no)"<<endl;

        string finalchoice;
        cin>>finalchoice;

        if(finalchoice="no")
        {
            cout<<"Quitting "<<endl;
            return 0;
        }
}
    return 0;
}