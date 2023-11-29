#include<iostream>
using namespace std;
template<class t1,class t2>
class sum
{
    public:
        t1 a; 
        t2 b; 
        sum(t1 x,t2 y)
        {
            a=x;
            b=y;
            cout<<a+b<<endl;
        }
};
int main()
{
    sum obj1(9,9);
    sum obj2(9.8,1.5);
}