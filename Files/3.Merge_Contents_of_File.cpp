#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream give1("file1.txt");
    ifstream give2("file2.txt");
    ofstream take("Merge.txt");

    string s;
    while(getline(give1,s))
    {
        take<<s<<endl;
    }
    give1.close();
    while(getline(give2,s))
    {
        take<<s<<endl;
    }
    give2.close();
    take.close();
}