#include<iostream>
using namespace std;
class binary
{
    public:
    int a,b,c;
    void display()
    {
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    void read(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    binary operator +(binary b2)//Member Function
    {
        binary res;
        res.a=a+b2.a;
        res.b=b+b2.b;
        res.c=c+b2.c;
        return res;
    }
};
int main()
{
    binary b1,b2,b3;
    b1.read(10,20,30);
    b2.read(1,2,3);
    b3=b1+b2;
    b3.display();
}