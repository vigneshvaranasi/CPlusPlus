#include<iostream>
using namespace std;
class a
{
    public:
    a()
    {
        cout<<"I am Class a"<<endl;
    }
};
class b:virtual public a
{
    public:
    b()
    {
        cout<<"I am class b"<<endl;
    }
};
class c:virtual public a
{
    public:
    c()
    {
        cout<<"I am class c"<<endl;
    }
};
class d:public b,public c
{
    public:
    d()
    {
        cout<<"I am class d"<<endl;
    }
};
int main()
{
    d obj;
}