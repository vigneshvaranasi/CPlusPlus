#include<iostream>
using namespace std;

class binary
{
    public:
    int a, b, c;
    
    void display()
    {
        cout << a << " " << b << " " << c << endl;
    }
    
    void read(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }

    friend binary operator +(const binary& b1, const binary& b2);
};

binary operator +(binary& b1,binary& b2)
{
    binary result;
    result.a = b1.a + b2.a;
    result.b = b1.b + b2.b;
    result.c = b1.c + b2.c;
    return result;
}

int main()
{
    binary b1, b2, b3;
    b1.read(10, 20, 30);
    b2.read(1, 2, 3);
    b3 = b1 + b2;
    b3.display();
    
    return 0;
}
