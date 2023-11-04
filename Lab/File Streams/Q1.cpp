#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream input("file1.txt");
    input<<"Hello All"<<endl;
    input.close(); 

    ifstream give("file1.txt");
    ofstream take("file2.txt");
    string s;
    if(give.is_open())
    {
        while(getline(give, s))
        {
            take << s << endl;
        }
        give.close();
        cout<<"Copied Successfully"<<endl;
    }
    else 
        cout << "Unable to open file";
    take.close();
    give.close();
    return 0;
}