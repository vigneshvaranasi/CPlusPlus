/* 2.Write a program to design a complex numbers. The complex
class should use an external function (use if as friend function) to 
add two complex numbers. The function should return an object of type 
complex representing the sum of two complex numbers. */

#include<iostream>
using namespace std;
class complex
{
    private:
        int real,imag;
    public:
        void input()
        {
            cout<<"Enter real and imag parts:";
            cin>>real>>imag;
        }
        void display()
        {
            cout<<"The Sum is:"<<real<<"+"<<imag<<"i"<<endl;
        }
    friend complex add(complex,complex);
};
complex add(complex c1,complex c2)
{
    complex result;
    result.real=c1.real+c2.real;
    result.imag=c1.imag+c2.imag;
    return result;
}
int main()
{
    complex c1,c2,c3;
    c1.input();
    c2.input();
    c3=add(c1,c2);
    c3.display();

}