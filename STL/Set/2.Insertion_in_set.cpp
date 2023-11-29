#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s{5,4,12,34,2,1};
    for (auto j : s)
        cout << j << " ";
    cout<<endl;

    s.insert(9);
    s.insert(10);
    s.insert(20);

    for (auto j : s)
        cout << j << " ";
    cout<<endl;
}