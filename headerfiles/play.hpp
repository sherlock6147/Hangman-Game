#include <iostream>
#include <string.h>
#include "displayHangman.hpp"
using namespace std;
string qMaster = "QUESTION MASTER" , Player = "PLAYER";
struct player
{
    string role="NULL";
    string name="NULL";
    int score=0;
};
class game
{
    private:
        player player1,player2;
        string question,answer,hint;
        char userGuess;
        int qMaster,ans;
    public:
        game()
        {
            getgamedata();
        }
        void getgamedata()
        {
            cout << "Please enter player 1's name: ";
            getline ( cin , player1.name );
            cout << "Please enter player 2's name: ";
            getline ( cin , player2.name );
            cout << "Who would like to be QUESTION MASTER first?(PLAYER NUMBER) ";
            cin>>qMaster;
            if (qMaster==1 || qMaster==2)
            {
                ans=(qMaster==1)?2:1;
            }
            else
            {
                cout<<"Invalid arguement\n";
                getgamedata();
            }
        }
};
