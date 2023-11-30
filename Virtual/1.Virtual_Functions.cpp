#include <iostream>
using namespace std;

// Base class with a virtual function
class Base {
public:
    virtual void display() {
        cout << "Display from Base" << endl;
    }
};

// Derived class overriding the virtual function
class Derived : public Base {
public:
    void display()  {
        cout << "Display from Derived" << endl;
    }
};

int main() {
    Base* ptr;
    Derived obj;
    ptr=&obj;           // Base class pointer pointing to Derived class object
    ptr->display();     // Calls Derived class display dynamically
    return 0;
}
