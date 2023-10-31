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
class b:public a
{
    public:
    b()
    {
        cout<<"I am class b"<<endl;
    }
};
class c:public a
{
    public:
    c()
    {
        cout<<"I am class c"<<endl;
    }
};
int main()
{
    b obj1;
    c obj2;
}