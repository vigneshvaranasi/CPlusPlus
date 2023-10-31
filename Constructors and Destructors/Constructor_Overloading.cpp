#include<iostream>
using namespace std;
class rectangle
{
    public:
    int length,breadth;
    void area()
    {
        cout<<length*breadth<<endl;
    }
    rectangle()
    {
        length=0;
        breadth=0;
    }
    rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    rectangle(int x)
    {
        length=x;
        breadth=x;
    }
};
int main()
{
    rectangle r1;
    r1.area();
    rectangle r2(2,3);
    r2.area();
    rectangle r3(3);
    r3.area();
}