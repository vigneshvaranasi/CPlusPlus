#include<iostream>
using namespace std;
namespace sample
{
    int a=10;
}
int main()
{
    using namespace sample;
    cout<<"Value of a is:"<<a;
}