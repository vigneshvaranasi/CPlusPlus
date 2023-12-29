#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vector_orginal{1,2,3,4,5};
    vector<int> vector_copied1(vector_orginal);
    for(auto it:vector_copied1)
        cout<<it<<endl;
    vector<int> vector_copied2(vector_orginal.begin(),vector_orginal.end());
    for(auto it:vector_copied2)
        cout<<it<<endl;
}