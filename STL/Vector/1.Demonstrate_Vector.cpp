#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    cout << v.size() << endl;
    for (int i = 0; i < 5; i++)
        v.push_back(i);
    cout << v.size() << endl;
    for (int i = 0; i < 5; i++)
        cout << v[i] << " ";
    cout << endl;
    vector<int>::iterator i;
    for (i = v.begin(); i != v.end(); i++)
        cout << *i << " ";
    cout << endl;
    for (auto j : v)
        cout << j << " ";
}