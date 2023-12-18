#include <iostream>
using namespace std;
class MyClass
{
    public:
        static void myStaticFunction(); // static member function
};
void MyClass::myStaticFunction()
{
    cout << "Hello World!";
}
int main()
{
    MyClass::myStaticFunction(); // Calling the static member function
}
