#include<iostream>
using namespace std;
void increment(const int a)
{
    //a=a+1;
    //The Value of a Cannot be changed for const Arguments it Shows Error!
    cout<<"The value of a is:"<<a<<endl;
}
int main()
{
    increment(9);
}