#include<iostream>
using namespace std;
void add(int a,int b)
{
    cout<<"Sum is:"<<a+b<<endl;
}
void add(float a,float b)
{
    cout<<"Sum is:"<<a+b<<endl;
}
int main()
{
    int a,b;
    float x,y;
    cout<<"Enter 2 Integers:";
    cin>>a>>b;
    cout<<"Enter 2 Float Numbers:";
    cin>>x>>y;
    add(a,b);
    add(x,y);
}