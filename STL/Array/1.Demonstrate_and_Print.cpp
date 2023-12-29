#include <bits/stdc++.h>
using namespace std;

int main()
{
    array<int, 10> a;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << " ";
    }
    cout << endl;
    array<int, 10> b{0, 2};
    for (int i = 0; i < b.size(); i++)
    {
        cout << b.at(i) << " ";
    }
    cout << endl;
    a.fill(9);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << " ";
    }
}