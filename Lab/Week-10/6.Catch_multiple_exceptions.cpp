#include<iostream>
using namespace std;
void fun(int value)
{
    try
    {
        if(value==0)
            throw value;
        else if(value>0)
            throw value;
        else if(value<0)
            throw value;

    }
    catch(...)
    {
        cout<<"Exception Found"<<endl;
    }
}
int main()
{
    fun(0);
    fun(5);
    fun(-9);
}