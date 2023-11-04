#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype>
#include <sstream>
using namespace std;
int main()
{
    ifstream give("file1.txt");
    ofstream take("file2.txt");
    string word, line;
    vector<string> str;
    while (getline(give, line))
    {
        stringstream ss(line);
        while (ss >> word)
        {
            str.push_back(word);
        }
    }
    sort(str.begin(), str.end());
    for (string x : str)
        take<<x<<endl;
    return 0;
}