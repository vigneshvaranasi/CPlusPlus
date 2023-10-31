#include<iostream>
using namespace std;
namespace first
{
        int a=10;
        namespace second
        {
            int a=20;
        }
}
int main()
{
    cout<<"First Namespace:"<<first::a<<endl;
    cout<<"Second Namespace:"<<first::second::a;

}