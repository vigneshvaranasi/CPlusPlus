#include<iostream>
using namespace std;
namespace first
{
    void print()
    {
        cout<<"First Namespace\n";
    }
}
namespace second
{
    void print()
    {
        cout<<"Second Namespace\n";
    }
}
int main()
{
    first::print();
    second::print();
}