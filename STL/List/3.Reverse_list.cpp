#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    l.push_front(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);

    for (auto j : l)
        cout << j << " ";
    cout << endl;

    l.reverse();
    
    for (auto j : l)
        cout << j << " ";
    cout << endl;
}