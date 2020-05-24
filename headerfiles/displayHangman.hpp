#include <iostream>
using namespace std;
void dispHangman(int lives)
{
    if(lives==0)
    {
        cout<<"+------------+"<<endl;
        cout<<"|            |"<<endl;
        cout<<"|            O"<<endl;
        cout<<"|            |"<<endl;
        cout<<"|           / \\"<<endl;
        cout<<"|            |"<<endl;
        cout<<"|           / \\"<<endl;
    }
    if(lives==1)
    {
        cout<<"+------------+"<<endl;
        cout<<"|            |"<<endl;
        cout<<"|            O"<<endl;
        cout<<"|            |"<<endl;
        cout<<"|           / \\"<<endl;
        cout<<"|            |"<<endl;
        cout<<"|           /"<<endl;
    }
    if(lives==2)
    {
        cout<<"+------------+"<<endl;
        cout<<"|            |"<<endl;
        cout<<"|            O"<<endl;
        cout<<"|            |"<<endl;
        cout<<"|           / \\"<<endl;
        cout<<"|            |"<<endl;
        cout<<"|           "<<endl;
    }
    if(lives==3)
    {
        cout<<"+------------+"<<endl;
        cout<<"|            |"<<endl;
        cout<<"|            O"<<endl;
        cout<<"|            |"<<endl;
        cout<<"|           / \\"<<endl;
        cout<<"|           "<<endl;
        cout<<"|           "<<endl;
    }
    if(lives==4)
    {
        cout<<"+------------+"<<endl;
        cout<<"|            |"<<endl;
        cout<<"|            O"<<endl;
        cout<<"|            |"<<endl;
        cout<<"|           /"<<endl;
        cout<<"|           "<<endl;
        cout<<"|           "<<endl;
    }
    if(lives==5)
    {
        cout<<"+------------+"<<endl;
        cout<<"|            |"<<endl;
        cout<<"|            O"<<endl;
        cout<<"|            |"<<endl;
        cout<<"|           "<<endl;
        cout<<"|           "<<endl;
        cout<<"|           "<<endl;
    }
    if(lives==6)
    {
        cout<<"+------------+"<<endl;
        cout<<"|            |"<<endl;
        cout<<"|            O"<<endl;
        cout<<"|            "<<endl;
        cout<<"|           "<<endl;
        cout<<"|           "<<endl;
        cout<<"|           "<<endl;
    }
    if(lives==7)
    {
        cout<<"+------------+"<<endl;
        cout<<"|            |"<<endl;
        cout<<"|           "<<endl;
        cout<<"|           "<<endl;
        cout<<"|           "<<endl;
        cout<<"|           "<<endl;
        cout<<"|           "<<endl;
    }
}