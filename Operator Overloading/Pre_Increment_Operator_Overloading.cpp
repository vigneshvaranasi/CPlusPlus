#include<iostream>
using namespace std;
class preinc
{
    public:
        int value;
        void read()
        {
            cout<<"Enter A Number to Pre Increment it:";
            cin>>value;
        }
        void operator ++()
        {
            ++value;
        }
};
int main()
{
    preinc obj;
    obj.read();
    ++obj;
    cout<<"\nPre Incremented Value is:"<<obj.value;
}