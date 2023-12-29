#include<bits/stdc++.h>
using namespace std;
int main()
{
    array<int,5> a={1,2,3,4,5};
    for(auto it:a)
    {
        cout<<it<<" ";
    }
    cout << endl;
    array<int,5>::iterator i;
    for (i = a.begin(); i != a.end(); i++)
        cout << *i << " ";
    cout << endl;
}