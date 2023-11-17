#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main()
{
    ifstream give("file1.txt");
    ofstream take("file2.txt");

    vector<string> v;
    string line,word;
    while(getline(give,line))
    {
        stringstream ss(line);
        while(ss>>word)
        {
            v.push_back(word);
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        take<<v[i]<<endl;
    }
    give.close();
    take.close();
}