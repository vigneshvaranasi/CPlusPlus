#include<iostream>
using namespace std;
template<class t1,class t2>
void sample(t1 a,t2 b)
{
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    cout<<a/b<<endl;
}
int main()
{
    sample(1,2);
    sample(1.2,3.4);
    sample(1.2,3);
}