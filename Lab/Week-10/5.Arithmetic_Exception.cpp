#include<iostream>
using namespace std;
template<class t>
void fun(t num1,t num2)
{
    try
    {
        if(isalpha(num1) || isalpha(num2) || num2==0)
            throw 1;
        else
            cout<<num1/num2<<endl;
    }
    catch(int exception)
    {
        cout<<"Arithmetic Exception"<<endl;
    }
}

int main()
{
    fun(4,2);
    fun('a','b');
    fun(2,0);
}