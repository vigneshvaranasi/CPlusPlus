#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{1, 2, 3, 4, 5};
    for (auto j : v)
        cout << j << " ";
    cout<<endl;

    vector<int>::iterator i = v.begin();
    v.erase(i);

    for (auto j : v)
        cout << j << " ";
    cout<<endl;

    vector<int>::iterator j = v.begin() + 2;
    v.erase(j);

    for (auto j : v)
        cout << j << " ";
    cout<<endl;

    vector<int>::iterator k = v.end();
    v.erase(k);

    for (auto j : v)
        cout << j << " ";
    cout<<endl;
}