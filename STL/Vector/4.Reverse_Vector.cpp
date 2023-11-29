#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v{1,2,3,4,5};
    for (auto j : v)
        cout << j << " ";
    cout<<endl;
    reverse(v.begin(),v.end());
    for (auto j : v)
        cout << j << " ";
    cout<<endl;
}