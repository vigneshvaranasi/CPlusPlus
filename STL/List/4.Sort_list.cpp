#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(4);
    l.push_back(3);
    l.push_back(1);
    l.push_back(2);

    for (auto j : l)
        cout << j << " ";
    cout << endl;

    l.sort();
    
    for (auto j : l)
        cout << j << " ";
    cout << endl;
}