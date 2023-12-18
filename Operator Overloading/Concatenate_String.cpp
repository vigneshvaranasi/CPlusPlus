#include<iostream>
using namespace std;
class con
{
    public:
        string str;
        void read()
        {
            cout<<"Enter a string to concatenate:";
            cin>>str;
        }
        void display()
        {
            cout<<str;
        }
        con operator +(con s2)
        {
            con res;
            res.str=str+s2.str;
            return res;
        }

};
int main()
{
    con s1,s2,s3;
    s1.read();
    s2.read();
    s3=s1+s2;
    s3.display();
}