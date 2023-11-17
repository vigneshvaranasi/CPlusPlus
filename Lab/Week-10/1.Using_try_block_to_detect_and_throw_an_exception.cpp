/* 1.Write program using try block to detect and throw an exception if the condition 
‘divide-by-zero’ occurs. */

#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter 2 Numbers to add:";
    cin>>num1>>num2;
    try
    {
        if(num2==0)
            throw 0;
        else
            cout<<num1/num2;
    }
    catch(int exception)
    {
        cout<<"Exception Caught As numm2=0";
    }
}