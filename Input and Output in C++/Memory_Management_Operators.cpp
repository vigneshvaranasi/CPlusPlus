#include<iostream>
using namespace std;
int main()
{
    int *p= new int;
    cout<<p<<endl;
    delete p;
    cout<<p<<endl;
    cout<<sizeof(p)<<endl;
    //It Becomes Dangling Pointer
}