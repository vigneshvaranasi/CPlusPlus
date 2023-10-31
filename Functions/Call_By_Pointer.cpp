#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
int main()
{
    int a,b;
    cout<<"Enter 2 Numbers to swap:";
    cin>>a>>b;
    cout<<"Elements Before Swap:"<<endl;
    cout<<"A:"<<a<<endl;
    cout<<"B:"<<b<<endl;
    swap(&a,&b);
    cout<<"Elements After Swap:"<<endl;
    cout<<"A:"<<a<<endl;
    cout<<"B:"<<b;
}