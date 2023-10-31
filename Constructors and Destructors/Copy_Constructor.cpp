#include<iostream>
using namespace std;
class sample
{
    public:
    int a,b;
    sample(int x,int y)
    {
        a=x;
        b=y;
    }
    sample(sample &s)
    {
        cout<<s.a<<" "<<s.b;
    }
};
int main()
{
    sample obj1(10,20);
    sample obj2(obj1);
}