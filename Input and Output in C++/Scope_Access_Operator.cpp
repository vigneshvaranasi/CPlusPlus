#include<iostream>
using namespace std;
int a=10;
int main()
{
    int a=20;
    cout<<"The value of a in this scope is:"<<a<<"\n";
    cout<<"The value of a in global scope is:"<<::a<<"\n";
}