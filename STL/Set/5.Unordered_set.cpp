#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> unoset;
    unoset.insert(1);
    unoset.insert(4);
    unoset.insert(2);
    unoset.insert(3);
    unoset.insert(2);

    for(auto i:unoset)
        cout<<i<<" ";
}