#include <bits/stdc++.h>
using namespace std;
int main()
{
    multimap<string, int> m;
    m.emplace("vvsv", 9);
    m.emplace("vvsv", 10);

    multimap<string, int>::iterator i;
    cout << "KEY\tElement\n";
    for (i = m.begin(); i != m.end(); i++)
        cout << i->first << "\t" << i->second << endl;
}