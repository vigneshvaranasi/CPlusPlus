#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> mset;
    mset.insert(1);
    mset.insert(4);
    mset.insert(1);
    mset.insert(2);
    mset.insert(3);

    for (auto i : mset)
        cout << i << " ";
}