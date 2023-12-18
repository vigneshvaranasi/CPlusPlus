#include<iostream>
using namespace std;
class postinc
{
    public:
        int value;
        void read()
        {
            cout<<"Enter a Number to Post Increment:";
            cin>>value;
        }
        void operator ++(int)
        {
            value++;
        }
};
int main()
{
    postinc obj;
    obj.read();
    obj++;
    cout<<"\nPost Incremented Value is:"<<obj.value;
}