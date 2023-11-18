#include<iostream>
using namespace std;
class complex
{
    public:
        int real,imag;
        void read()
        {
            cout<<"Enter real and imag parts:";
            cin>>real>>imag;
        }
        complex operator -(complex c2)
        {
            complex res;
            res.real=real-c2.real;
            res.imag=imag-c2.imag;
            return res;
        }

};
int main()
{
    complex c1,c2,c3;
    c1.read();
    c2.read();
    c3=c1-c2;
    cout<<"Result is:"<<c3.real<<"-"<<c3.imag<<"i"<<endl;
}