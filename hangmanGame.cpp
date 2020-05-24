#include <iostream>
#include <string.h>
#include "headerfiles/play.hpp"
#include "headerfiles/displayRules.hpp"
using namespace std;
int main()
{
    bool progEnd = false;
    char userDecision = 'N';
    game newGame;
    do
    {
        int userChoice=0;
        bool invalidArgument=false;
        //start playing game
        cout<<"Press 1 to see rules"<<endl;
        cout<<"Press 2 to continue playing"<<endl;
        cin>>userChoice;
        while (getchar()!='\n')
        {
            ;
        }
        switch (userChoice)
        {
        case 1:
            dispRules();
            invalidArgument=false;
            break;
        case 2:
            newGame.playGame();
            invalidArgument=false;
            break;
        default:
            cout<<"Wrong option. Please try again."<<endl;
            invalidArgument=true;
            progEnd=false;
            break;
        }
        //ending lines
        if(invalidArgument==false)
        {
            cout<<"Would you like to continue(Y/N)? ";
            cin>>userDecision;    
        }
        progEnd=(userDecision=='N'||userDecision=='n')?true:false;
    } while(progEnd==false);
    return 0;
}