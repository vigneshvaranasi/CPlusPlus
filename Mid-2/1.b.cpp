#include <iostream>
using namespace std;
class A
{
public:
    virtual void f() { cout << "f() in class A" << endl; }
    virtual void g() { cout << "g() in class A" << endl; }
};
class B : public A
{
public:
    void f() { cout << "f() in class B" << endl; }
    void g() { cout << "g() in class B" << endl; }
};
int main()
{
    A *p;
    B b;
    p=&b;
    p->f();
    p->g();
}