#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream give("file1.txt");
    give<<"Happiest birthday viggu";
    give<<"\nhijgf";
    give.close();
    ofstream take("file2.txt");
    ifstream givein("file1.txt");
    string s;
    while(!givein.eof())
    {
        givein>>s;
        take<<s<<" ";
    }
    take.close();
    givein.close();
    return 0;
}