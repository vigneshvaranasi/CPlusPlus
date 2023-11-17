#include<iostream>
using namespace std;
class employee
{
    protected:
        int eno;
        string ename;
    public:
        employee()
        {
            cout<<"Enter Employee Name and Number:";
            cin>>ename>>eno;
        }
};
class typist:public employee
{
    public:
    void display()
    {
        cout<<"Employee Type:Typist"<<endl;
        cout<<"Employee Name:"<<ename<<endl;
        cout<<"Employee Numer:"<<eno<<endl;
    }
};
class manager:public employee
{
    public:
    void display()
    {
        cout<<"Employee Type:Manager"<<endl;
        cout<<"Employee Name:"<<ename<<endl;
        cout<<"Employee Numer:"<<eno<<endl;
    }

};
int main()
{
    manager mobj;
    typist tobj;
    cout<<"Manager Details:"<<endl;
    mobj.display();;
    cout<<"Typist Details:"<<endl;
    tobj.display();
}
