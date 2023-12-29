#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1{1,2,3,4,5};
    vector<int> v2{6,7,8,9,10};
    cout<<"Vector 1 before swapping:";
    for(auto i:v1)
        cout<<i<<" ";
    cout<<endl;
    cout<<"Vector 2 before swapping:";
    for(auto i:v2)
        cout<<i<<" ";
    cout<<endl;

    swap(v1,v2);

    cout<<"Vector 1 after swapping:";
    for(auto i:v1)
        cout<<i<<" ";
    cout<<endl;
    cout<<"Vector 2 after swapping:";
    for(auto i:v2)
        cout<<i<<" ";
}