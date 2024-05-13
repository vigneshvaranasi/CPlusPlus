#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(9);
    pq.push(1);
    pq.push(2);
    pq.push(3);

    // Maximum element will be at the top
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    pq.pop();

    while(!pq.empty())
        pq.pop();


    // Minimum element will be at the top
    // Minimum Priority Queue
    priority_queue<int> pq1;
    pq1.push(-9);
    pq1.push(-1);
    pq1.push(-2);
    pq1.push(-3);

    cout<<-1*pq1.top()<<endl;

    // Minimum Priority Queue
    priority_queue<int,vector<int>,greater<int>> pq2;
    pq2.push(9);
    pq2.push(1);
    pq2.push(2);
    pq2.push(3);
    // Minimum element will be at the top
    cout<<pq2.top()<<endl;
    pq2.pop();
    cout<<pq2.top()<<endl;
    pq2.pop();



}