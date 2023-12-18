#include<iostream>
using namespace std;
class Base
{
    private:
        int a;
    public:
        int b;
    protected:
        int c;
    public:
    void input(int a1,int b1,int c1)
    {
        a=a1;
        b=b1;
        c=c1;
    }
};
class Derived:public Base
{
    // a is not accessible from Derived
    // b is public in Base
    // c is protected in Base
    public:
        void dispaly()
        {            
            cout<<"Printing From Derived Class"<<endl;
            /* cout<<"a is:"<<a<<endl; */ //error as a is private in Base
            cout<<"b is:"<<b<<endl;
            cout<<"c is:"<<c<<endl;
        }
};
int main()
{
    Derived obj;
    obj.input(1,2,3);
    // cout<<"a is:"<<obj.a<<endl; //error as a is private in Base
    cout<<"b is:"<<obj.b<<endl;
    // cout<<"c is:"<<obj.c<<endl; //error as c is protected in Base
    obj.dispaly();
    return 0;
}