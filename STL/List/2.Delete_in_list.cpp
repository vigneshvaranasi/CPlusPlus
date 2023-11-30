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

    l.pop_back();
    l.pop_back();

    for (auto j : l)
        cout << j << " ";
    cout << endl;

    l.push_front(5);
    l.push_front(6);
    l.push_front(7);
    l.push_front(8);

    for (auto j : l)
        cout << j << " ";
    cout << endl;

    l.pop_front();
    l.pop_front();
    l.pop_front();

    for (auto j : l)
        cout << j << " ";
    cout << endl;

    cout<<l.size()<<endl;
    l.clear();
    cout<<l.size()<<endl;
}