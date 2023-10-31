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
    void show()
    {
        cout<<a<<" "<<b;
    }
};
int main()
{
    sample obj(10,20);
    obj.show();
}