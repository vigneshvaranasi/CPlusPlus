#include <iostream>
using namespace std;
class Base
{
    public:
        virtual void fun()
        {
            cout << "Base Class"<<endl;
        }
};
class Derived : public Base
{
    public:
        void fun()
        {
            cout << "Derived Class"<<endl;
        }
};
int main()
{
    Base *ptr;
    Derived obj;
    ptr=&obj;
    ptr->fun();
}