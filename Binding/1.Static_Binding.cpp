#include <iostream>
using namespace std;

class Base {
public:
    void display() {
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
    Base obj;
    obj.display();  // Calls Base class display statically

    Derived obj2;
    obj2.display();  // Calls Derived class display statically

    return 0;
}
