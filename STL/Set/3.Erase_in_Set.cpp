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
}