#include<iostream>
using namespace std;
class sample
{
    public:
    int a,b;
    sample()
    {
        a=10;
        b=20;
    }
    void show()
    {
        cout<<a<<" "<<b;
    }
};
int main()
{
    sample obj;
    obj.show();
}