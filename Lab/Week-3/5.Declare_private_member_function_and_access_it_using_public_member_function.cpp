/*Write a program to declare private member function and access it using public member function. */

#include<iostream>
using namespace std;
class sample
{
    private:
    int a,b;
    void input()
    {
        cout<<"Enter 2 Number to add:";
        cin>>a>>b;
    }
    public:
    void add()
    {   input();
        cout<<"The Sum is:"<<a+b;
    }
};
int main()
{
    sample obj;
    obj.add();
}