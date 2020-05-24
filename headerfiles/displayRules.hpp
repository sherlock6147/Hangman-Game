#include <iostream>
#include <fstream>
#define PATH "files/rules.txt"
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
            cout<<line<<"\n";
        }
    }
    rulesFile.close();    
}