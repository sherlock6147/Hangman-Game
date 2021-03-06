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
        bool player1WinFlag=false,player2WinFlag=false;
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
                cout<<"Invalid arguement"<<endl;
                getgamedata();
            }
        }
        void getQuestion()
        {
            if(qMaster==1)
            {
                cout<<"For "<<player1.name<<" only"<<endl;
            }
            else
            {
                cout<<"For "<<player2.name<<" only"<<endl;
            }
            cout<<"Please enter queston? (USE - FOR BLANK SPACES)"<<endl;
            getline(cin,question);
            cout<<"Please enter hint?)"<<endl;
            getline(cin,hint);
            cout<<"Please enter correct answer: "<<endl;
            getline(cin,answer);
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
                cout<<"Question for "<<player1.name<<""<<endl;
            }
            else
            {
                cout<<"Question for "<<player2.name<<""<<endl;
            }
            cout<<question<<endl;
            cout<<"Lives remaining: "<<lives<<endl;
        }
        void isGameOver()
        {
            if(lives==0 ||answer==question)
            {
                if(lives==0)
                {
                    if(qMaster==1)
                        player1WinFlag=true;
                    else
                        player2WinFlag=true;
                }
                if(question==answer)
                {
                    if(qMaster==1)
                        player2WinFlag=true;
                    else
                        player1WinFlag=true;
                }
            }
        }
        void playGame()
        {
            getQuestion();
            while(player1WinFlag==false and player2WinFlag==false)
            {
                clrscrr();
                dispHangman(lives);
                showQuestion();
                if(isGuessCorrect())
                {
                    cout<<"Congratulations ! you have chosen correct option"<<endl;
                }
                else
                {
                    cout<<"Sorry ! you have chosen wrong option"<<endl;
                    --lives;
                }
                isGameOver();
                if(player2WinFlag)
                {
                    ++player2.score;
                    cout<<player2.name<<" wins and his/her score is: "<<player2.score<<" ."<<endl;
                    cout<<player1.name<<" loses and his/her score is: "<<player1.score<<" ."<<endl;
                }
                else if(player1WinFlag)
                {
                    ++player1.score;
                    cout<<player1.name<<" wins and his/her score is: "<<player1.score<<" ."<<endl;
                    cout<<player2.name<<" loses and his/her score is: "<<player2.score<<" ."<<endl;
                }
            }
            player2WinFlag=false;
            player1WinFlag=false;
            int temp;
            temp=qMaster;
            qMaster=ans;
            ans=temp;
        }
};
