#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> vec;

    vector<int> v1{1,2};
    vector<int> v2{10,20};
    vector<int> v3{100,200,300};

    vec.push_back(v1);
    vec.push_back(v2);
    vec.push_back(v3);

    for(auto i:vec)
    {
        for(auto j:i)
            cout<<j<<" ";
        cout<<endl;
    }

    for(int i=0;i<vec.size();i++)
    {
        for(int j=0;j<vec[i].size();j++)
            cout<<vec[i][j]<<" ";
        cout<<endl;
    }


}