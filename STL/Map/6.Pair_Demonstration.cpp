#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int>p;
    p.first=10;
    p.second=20;
    cout<<p.first<<p.second<<endl;

    pair<int,int>p1{1,2};
    cout<<p1.first<<p1.second<<endl;

    pair<pair<int,int>,int>p2{{1,2},3};
    cout<<p2.first.second<<p2.second<<endl;

    pair<pair<int,int>,pair<int,int>> p3{{1,2},{3,4}};
    cout<<p3.first.second<<p3.second.second<<endl;
}