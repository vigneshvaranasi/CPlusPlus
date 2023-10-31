#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int num1,num2;
    cout<<"Enter 2 Numbers to add:";
    cin>>num1>>num2;
    int res=add(num1,num2);
    cout<<"The sum is:"<<res;
}