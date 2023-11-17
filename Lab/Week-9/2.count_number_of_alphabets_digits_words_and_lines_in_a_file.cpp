#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main()
{
    ofstream input("file1.txt");
    input<<"Hello All"<<endl;
    input<<"Good Morning"<<endl;
    input<<"123456789"<<endl;
    input.close();

    ifstream take("file1.txt");
    string line,word;
    int ac=0,dc=0,wc=0,lc=0;
    while(getline(take,line))
    {
        lc++;
        stringstream ss(line);
        while(ss>>word)
        {
            wc++;
            for(int i=0;i<word.length();i++)
            {
                if(isalpha(word[i]))
                    ac++;
                else if(isdigit(word[i]))
                    dc++;
            }
        }
    }
cout << "Number of Alphabets in file are:" << ac;
cout << "\nNumber of Digits in file are:" << dc;
cout << "\nNumber of Words in file are:" << wc;
cout << "\nNumber of Lines in file are:" << lc;
}