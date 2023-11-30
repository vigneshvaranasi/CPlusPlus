#include <iostream>
#include <list>
#include<algorithm>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);

    for (auto j : l)
        cout << j << " ";
    cout << endl;

    int target = 9;
    auto i = find(l.begin(),l.end(),target);
    if (i != l.end())
    {
        cout << "Element " << target << " found in the List." << endl;
    }
    else
    {
        cout << "Element " << target << " not found in the List." << endl;
    }
    return 0;
}