#include<iostream>
using namespace std;
class sum
{
    public:
    int a,b;
    int add()
    {
        return a+b;
    }
};
int main()
{
    sum obj;
    obj.a=10;
    obj.b=20;
    cout<<obj.add();
}