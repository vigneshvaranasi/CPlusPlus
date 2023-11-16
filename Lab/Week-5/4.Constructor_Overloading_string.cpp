/* 4.Create a class named ‘Programming’. While creating an object of the class, if 
nothing is passed to it, then the message “I love programming languages” should be 
printed. If some String is passed to it, then in place of “programming languages” the 
name of that String variable should be printed.
For example, while creating the object if we pass “cpp”, then “I love cpp” should be 
printed. */


#include<iostream>
using namespace std;
class programming
{
    public:
    programming()
    {
        cout<<"Good Morning ALL";
    }
    programming(string s)
    {
        string o="Good Morning ";
        cout<<o+s;
    }
};
int main()
{
    int n;
    cout<<"Do u want to enter string:";
    cin>>n;
    if(n)
    {
        string s;
        cout<<"Enter String:";
        cin>>s;
        programming obj1(s);
    }
    else
        programming obj2;
}