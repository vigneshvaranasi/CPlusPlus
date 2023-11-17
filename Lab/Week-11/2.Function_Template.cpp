#include<iostream>
using namespace std;
template<class t>
void display(t value)
{
    cout<<"****************"<<value<<"****************"<<endl;
}
int main()
{
    display('a');
    display("Hello");
    display(1);
    display(1.50);
}