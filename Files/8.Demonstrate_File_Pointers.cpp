#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream read("file1.txt");
    ofstream write("file1.txt");
    // Provides the present position of the read pointer.
    int pos=read.tellg();
    cout<<pos<<endl;
    // Provides the present position of the write pointer.
    pos=write.tellp();
    cout<<pos<<endl;
    write<<"Hello";
    // Provides the present position of the write pointer.
    pos=write.tellp();
    cout<<pos<<endl;

}