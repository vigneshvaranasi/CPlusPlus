#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream input("file1.txt", ios::app);
    input << "Appending the File" << endl;
    cout << "File Appended Successfully";
}