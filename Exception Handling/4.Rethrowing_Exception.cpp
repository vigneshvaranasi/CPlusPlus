#include<iostream>
using namespace std;
void division(int a,int b)
{
    try
    {
        if(b==0)
            throw b;
        else
            cout<<"Divison is:"<<a/b<<endl;
    }
    catch(int)
    {
        cout<<"Caught inside Function"<<endl;
        throw;
    }
}
int main()
{
    try
    {
        division(10,5);
        division(5,0);
    }
    catch(int a)
    {
        cout<<"Caught in Main";
    }
}

