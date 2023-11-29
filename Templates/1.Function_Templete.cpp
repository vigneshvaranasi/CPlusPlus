#include<iostream>
using namespace std;
template<class t>
void sample(t a)
{
    cout<<a<<endl;
}
int main()
{
    sample(1);
    sample('a');
    sample(1.2);
    sample("Hello");
}