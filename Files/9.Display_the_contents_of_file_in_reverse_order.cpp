#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream take("file1.txt");
    take.seekg(0, ios::end);
    int m = take.tellg();
    for (int i = 1; i <= m; i++)
    {
        char ch; 
        take.seekg(-i, ios::end);
        take >> ch;
        cout << ch;
    }
}