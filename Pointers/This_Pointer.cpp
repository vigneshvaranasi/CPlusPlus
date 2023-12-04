#include<iostream>
using namespace std;
class sample
{
    public:
        int a,b;
        sample(int a,int b)
        {
            this->a=a;
            this->b=b;
        }
        void dispay()
        {
            cout<<a<<endl<<b;
        }
};
int main()
{
    sample obj(10,20);
    obj.dispay();
}