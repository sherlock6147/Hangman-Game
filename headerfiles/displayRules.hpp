#include <iostream>
#include <fstream>
#define PATH "headerfiles/files/rules.txt"
using namespace std;
void dispRules()
{
    ifstream rulesFile;
    rulesFile.open(PATH,ios::in);
    string line;
    if(rulesFile.is_open())
    {
        while(getline(rulesFile,line))
        {
            cout<<line<<""<<endl;
        }
    }
    rulesFile.close();    
}