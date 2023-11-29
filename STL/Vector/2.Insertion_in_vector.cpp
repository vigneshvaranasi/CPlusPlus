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
    v.insert(i, 9);

    for (auto j : v)
        cout << j << " ";
    cout<<endl;

    vector<int>::iterator j = v.begin() + 2;
    v.insert(j, 18);

    for (auto j : v)
        cout << j << " ";
    cout<<endl;

    vector<int>::iterator k = v.end();
    v.insert(k,10);

    for (auto j : v)
        cout << j << " ";
    cout<<endl;
}