#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,int> m;
    m.insert(pair <int,int> (1, 10));
    m.insert(pair <int,int> (6, 60));
    m.insert(pair <int,int> (9, 90));
    m.insert(pair <int,int> (2, 20));
    m.insert(pair <int,int> (5, 50));
    m.insert(pair <int,int> (1, 70));

    unordered_map<int,int>::iterator i;
    cout<<"KEY\tElement\n";
    for(i=m.begin();i!=m.end();i++)
        cout<<i->first<<"\t"<<i->second<<endl;
}