#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s{5,4,12,34,2,1,9};
    for (auto j : s)
        cout << j << " ";
    cout<<endl;

    s.erase(9);

    for (auto j : s)
        cout << j << " ";
    cout<<endl;

    s.erase(s.begin(),s.lower_bound(5));

    for (auto j : s)
        cout << j << " ";
    cout<<endl;

    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);

    for (auto j : s)
        cout << j << " ";
    cout<<endl;

    cout<<s.size()<<endl;
    s.erase(s.begin(),s.find(30));

    for (auto j : s)
        cout << j << " ";
    cout<<endl;
    cout<<s.size()<<endl;

    s.clear();
    cout<<s.size()<<endl;
}