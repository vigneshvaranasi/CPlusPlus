#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Your Age:";
    cin>>n;
    try
    {
        if(n<18)
            throw(n);
        else
            cout<<"Welcome";
    }
    catch(int n)
    {
        cout<<"You Cannot Cast Your Vote";
    }
    
}