#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v{2,4,1,5,20,3,9};
    for (auto j : v)
        cout << j << " ";
    cout<<endl;
    sort(v.begin(),v.end());
    for (auto j : v)
        cout << j << " ";
    cout<<endl;
}