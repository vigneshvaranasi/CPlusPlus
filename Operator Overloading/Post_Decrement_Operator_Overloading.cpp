#include<iostream>
using namespace std;
class postdec
{
    public:
        int value;
        void read()
        {
            cout<<"Enter a Number to Post Decrement:";
            cin>>value;
        }
        void operator --(int)
        {
            value--;
        }
};
int main()
{
    postdec obj;
    obj.read();
    obj--;
    cout<<"\nPost Decremented Value is:"<<obj.value;
}