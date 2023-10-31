#include<iostream>
using namespace std;
void div(int a,int b,int &q,int &r)
{
    q=a/b;
    r=a%b;
}
int main()
{
    int a=40,b=2;
    int q,r;
    div(a,b,q,r);
    cout<<"Quotient is:"<<q<<endl;
    cout<<"Remainder is:"<<r<<endl;
}