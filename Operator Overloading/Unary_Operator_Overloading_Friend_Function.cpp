#include<iostream>
using namespace std;
class unary
{
    public:
    int a,b,c;
    unary(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display()
    {
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    friend void operator ++(unary &obj)//Friend function
    {
        obj.a++;
        obj.b++;
        obj.c++;
    }
};
int main()
{
    unary obj(10,20,30);
    cout<<"Before Increment:"<<endl;
    obj.display();
    ++obj;
    cout<<"After Increment:"<<endl;
    obj.display();

}