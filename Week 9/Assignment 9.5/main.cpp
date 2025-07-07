
/*
CH-230-A
a9 p5.cpp
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int incercare;

    int randomNumber;
    srand(static_cast<unsigned int>(time(0)));
    randomNumber=(rand()%100)+1;
    //the random number generator which picks a number from 1 to 100

    string nume;
    cout<<"What is your name, player?"<<endl;
    cin>>nume;
    cout<<nume<<" the random number has been picked"<<endl;
    //the part where i get the player's name for the game

    while(true)
    {
        cout<<"Enter your guess: ";
        cin>>incercare;
        //the message if the number guees is too low
        if(incercare < randomNumber)
        {
            cout<<"Your number is too low!"<<endl;;
        }else
        //the message if the number guees is too high
        if(incercare > randomNumber)
        {
            cout<<"Your number is too high!"<<endl;;
        }else
        {
            if(incercare=randomNumber)
            {
                cout<<"You guessed the number!"<<endl;
            }
            break;
            //the message if the number guees is the one
        }
    }
    return 0;
}