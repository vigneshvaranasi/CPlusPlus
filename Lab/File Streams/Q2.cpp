#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;
int main()
{
    ofstream input("file1.txt");
    input << "Hello All 1234" << endl;
    input << "Welcome" << endl;
    input.close();

    ifstream give("file1.txt");
    int ac = 0, wc = 0, dc = 0, lc = 0;
    string line, word;
    while (getline(give, line))
    {

        lc++;
        stringstream ss(line);
        while (ss >> word)
        {
            wc++;
            for (int i = 0; i < word.length(); i++)
            {
                if (isalpha(word[i]))
                    ac++;
                else if (isdigit(word[i]))
                    dc++;
            }
        }
    }
    cout << "Number of Alphabets in file are:" << ac;
    cout << "\nNumber of Digits in file are:" << dc;
    cout << "\nNumber of Words in file are:" << wc;
    cout << "\nNumber of Lines in file are:" << lc;
}
