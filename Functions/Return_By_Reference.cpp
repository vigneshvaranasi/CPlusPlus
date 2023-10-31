#include<iostream>
using namespace std;
int & sample (int &x)
{
    cout<<x<<endl;
    return x;
}
int main()
{
    int a=10;
    int &b=sample(a);
    cout<<b<<endl;
}