#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr[5];

    arr[0].push_back(9);
    arr[0].push_back(1);
    arr[3].push_back(10);
    for(auto i:arr)
    {
        for(auto j:i)
            cout<<j<<" ";
        cout<<endl;
    }
}