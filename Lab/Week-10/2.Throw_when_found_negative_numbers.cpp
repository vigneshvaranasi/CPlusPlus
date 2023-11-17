/* Develop a program to accept 10 integers into an array. While entering, when a negative 
number is found throw an user defined exception “NegativenumberException”.	 */


#include<iostream>
using namespace std;
int main()
{
    int a[5];
    cout<<"Enter Numbers to the array:";
    try
    {
        for(int i=0;i<=4;i++)
        {
            cin>>a[i];
            if(a[i]<0)
                throw a[i];
        }
    }
    catch(int exception)
    {
        cout<<"Negative Number Found.";
        exit(0);
    }
    cout<<"Array Elements are:";
    for(int i=0;i<=4;i++)
    {
        cout<<a[i]<<" ";
    }

}