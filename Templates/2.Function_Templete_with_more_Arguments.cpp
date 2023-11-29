#include<iostream>
using namespace std;
template<class t1,class t2>
void sum(t1 a,t2 b)
{
    cout<<a+b<<endl;
}
int main()
{
    sum(1,2);
    sum(1.2,3.4);
}