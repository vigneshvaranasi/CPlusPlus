#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    cout<<v.size();
    for(int i=0;i<5;i++)
        v.push_back(i);
    cout<<v.size();
    for(int i=0;i<5;i++)
        cout<<v[i];
    vector <int> ::iterator i;
    for(i=v.begin();i!=v.end();i++)
        cout<<*i;
}