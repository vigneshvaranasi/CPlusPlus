#include<iostream>
using namespace std;

class student
{
    public:
    int rollno;
    string name;
    void read()
    {
        cout<<"Enter Name and Roll Number:";
        cin>>name>>rollno;
    }
    void display()
    {
        cout<<"Name of Student is:"<<name<<endl;
        cout<<"Roll Number of Student is:"<<rollno<<endl;
    }
};
class marks:public student
{
    public:
        int m1,m2,m3;
        void marksin()
        {
            cout<<"Enter 3 Subject marks:";
            cin>>m1>>m2>>m3;
        }
        void marskout()
        {
            cout<<"Marks of 3 Subject are:"<<m1<<" "<<m2<<" "<<m3<<endl;
        }
};
class result:public marks
{
    public:
        int total;
        float avg;
        result()
        {   marksin();
            total=m1+m2+m3;
            avg=total/3;
            marskout();
            cout<<"Toatal Marks Are:"<<total<<endl;
            cout<<"Average Marks are:"<<avg<<endl;
        }
};

int main()
{
    student sobj;
    sobj.read();
    sobj.display();
    result robj;
}