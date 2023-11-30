#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    for (auto j : v)
        cout << j << " ";
    cout << endl;

    int target = 9;
    auto i = find(v.begin(),v.end(),target);
    if (i != v.end())
    {
        cout << "Element " << target << " found in the Vector." << endl;
    }
    else
    {
        cout << "Element " << target << " not found in the Vector." << endl;
    }
    return 0;
}