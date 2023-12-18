#include<iostream>
using namespace std;
void function(int value)throw(int)
{
    try
    {
        if(value==1)
            throw value;
    }
    catch(int expression)
    {
        cout<<"Exception Caught";
    }
}
int main()
{
       function(1);
}