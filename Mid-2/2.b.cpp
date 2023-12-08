#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream input("file1.txt");
    input<<"Hello"<<endl;
    input<<"Good Morning"<<endl;
    input.close();

    ifstream output("file1.txt");
    string s;
    while(getline(output,s))
    {
        cout<<s<<endl;
    }
    output.close();
}