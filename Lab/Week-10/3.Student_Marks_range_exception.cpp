/* Develop a program to accept marks of a student. If the user enters the marks less than 
0 and greater than 100, raise a user defined exception “Out of Range Exception”.   */

#include<iostream>
using namespace std;
int main()
{
    int a[5];
    cout<<"Enter Marks to the array:";
    try
    {
        for(int i=0;i<=4;i++)
        {
            cin>>a[i];
            if(a[i]<0 || a[i]>100)
                throw a[i];
        }
    }
    catch(int exception)
    {
        cout<<"Out of Range Exception";
        exit(0);
    }
    cout<<"Given Marks are:";
    for(int i=0;i<=4;i++)
    {
        cout<<a[i]<<" ";
    }

}