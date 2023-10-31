#include<iostream>
using namespace std;
class sample
{
    public:
    sample()
    {
        cout<<"I am Constructor"<<endl;
    }
    ~sample()
    {
        cout<<"I am Destructor";
    }
};
int main()
{
    sample obj;
}
