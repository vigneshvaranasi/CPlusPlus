#include <iostream>
using namespace std;
class Complex
{
private:
    double real;
    double imag;

public:
    Complex(double realPart, double imagPart) : real(realPart), imag(imagPart) {}
    Complex operator+(const Complex &other) const
    {
        return Complex(real + other.real, imag + other.imag);
    }
    Complex operator-(const Complex &other) const
    {
        return Complex(real - other.real, imag - other.imag);
    }
    Complex operator*(const Complex &other) const
    {
        return Complex((real * other.real) - (imag * other.imag), (real * other.imag) + (imag * other.real));
    }
    friend ostream &operator<<(ostream &os, const Complex &c)
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
    cout << "complex number 1: " << c1 << endl;
    cout << "complex number 2: " << c2 << endl;
    cout << "addition of complex number 1 and 2 : " << ac << endl;
    cout << "subtraction of complex number 1 and 2 : " << sc << endl;
    cout << "multiplication of complex number 1 and 2 : " << mc << endl;
    return 0;
}