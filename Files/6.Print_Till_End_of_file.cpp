#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream input("file1.txt");
    input<<"Good Morning"<<endl;   
    input<<"Hello All"<<endl;   
    input<<"Welcome"<<endl;  
    input.close();
    ifstream output("file1.txt");
    string s;
    while(output.eof()==0)
    {
        while(getline(output,s))
        cout<<s<<endl;
    } 
    output.close();
    cout<<"Printing Successful";
}