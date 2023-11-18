#include<iostream>
using namespace std;
class predec
{
    public:
        int value;
        void read()
        {
            cout<<"Enter A Number to Pre Decrement it:";
            cin>>value;
        }
        void operator --()
        {
            --value;
        }
};
int main()
{
    predec obj;
    obj.read();
    --obj;
    cout<<"\nPre Decremented Value is:"<<obj.value;
}