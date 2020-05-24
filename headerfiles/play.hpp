#include <iostream>
#include <string.h>
#include "displayHangman.hpp"
#include "clearScreen.hpp"
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
        int qMaster,ans,lives=7;
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
        void getQuestion()
        {
            if(qMaster==1)
            {
                cout<<"For "<<player1.name<<" only\n";
            }
            else
            {
                cout<<"For "<<player2.name<<" only\n";
            }
            cout<<"Please enter queston? (USE - FOR BLANK SPACES)\n";
            cin>>question;
            cout<<"Please enter hint?)\n";
            cin>>hint;
            cout<<"Please enter correct answer: \n";
            cin>>answer;
        }
        bool isGuessCorrect()
        {
            bool ansFlag=false;
            cout<<"Enter a charachter that is missing: ";
            cin>>userGuess;
            for (int i = 0; i < answer.length(); i++)
            {
                if(answer[i]==userGuess)
                {
                    question[i]=userGuess;
                    ansFlag=true;
                }
            }
            return ansFlag;
        }
        void showQuestion()
        {
            if(ans==1)
            {
                cout<<"Question for "<<player1.name<<"\n";
            }
            else
            {
                cout<<"Question for "<<player2.name<<"\n";
            }
            cout<<question;
            cout<<"Lives remaining: "<<lives;
        }
        void playGame()
        {
            getQuestion();
            clrscr();
            showQuestion();
            if(isGuessCorrect())
            {
                cout<<"Congratulations ! you have chosen correct option\n";
            }
            else
            {
                cout<<"Sorry ! you have chosen wrong option\n";
                --lives;
            }
            clrscr();
        }
};
