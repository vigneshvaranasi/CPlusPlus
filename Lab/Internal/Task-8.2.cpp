#include <iostream>
using namespace std;
class Complex
{
private:
    double real;
    double imag;

public:
    Complex(double realPart=0, double imagPart=0)
    {
        real = realPart;
        imag = imagPart;
    }
    Complex operator+(const Complex &c)
    {
        Complex ac;
        ac.real = real + c.real;
        ac.imag = imag + c.imag;
        return ac;
    }
    Complex operator-(const Complex &c)
    {
        Complex ac;
        ac.real = real - c.real;
        ac.imag = imag - c.imag;
        return ac;
    }
    Complex operator*(const Complex &c)
    {
        Complex ac;
        ac.real = real * c.real;
        ac.imag = imag * c.imag;
        return ac;        
    }
    friend ostream &operator<<(ostream &os, Complex &c)
    {
        os << c.real << " + " << c.imag << "i";
        return os;
    }
};
int main()
{
    Complex c1(2.1, 3.4), c2(4.3, 5.1);
    Complex ac = c1 + c2;
    Complex sc = c1 - c2;
    Complex mc = c1 * c2;
    cout << "Complex number 1: " << c1 << endl;
    cout << "Complex number 2: " << c2 << endl;
    cout << "Addition of complex numbers 1 and 2: " << ac << endl;
    cout << "Subtraction of complex numbers 1 and 2: " << sc << endl;
    cout << "Multiplication of complex numbers 1 and 2: " << mc << endl;
    return 0;
}