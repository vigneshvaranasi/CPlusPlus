#include <iostream>
using namespace std;
class Base {
public:
    virtual void display() {
        cout << "Base class display" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived class display" << endl;
    }
};

int main() {
    Base* ptr;
    Derived obj;
    ptr=&obj;           // Base class pointer pointing to Derived class object
    ptr->display();     // Calls Derived class display dynamically
    return 0;
}
