#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    s.push(9);
    s.push(10);
    s.push(1);
    s.push(2);
    s.push(3);

    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;


    while(!s.empty())
        s.pop();
    stack<int> s1;
    s1.top(); // Error

}