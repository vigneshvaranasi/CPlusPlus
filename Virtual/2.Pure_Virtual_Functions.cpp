#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() = 0; // Pure virtual function
};

class Derived : public Base {
public:
    void display()  {
        cout << "Implementation in Derived Class" << endl;
    }
};

int main() {
    Base* ptr;
    Derived obj;
    ptr=&obj;           // Base class pointer pointing to Derived class object
    ptr->display();     // Calls Derived class display dynamically
    return 0;
}
