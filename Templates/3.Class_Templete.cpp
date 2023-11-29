#include<iostream>
using namespace std;
template<class t>
class sample
{
    public:
        t a;
        sample(t x)
        {
            a=x;
            cout<<a<<endl;
        }
};
int main()
{
    sample obj1(9);
    sample obj2(9.8);
    sample obj3('V');
    sample obj4("Vignesh");

}