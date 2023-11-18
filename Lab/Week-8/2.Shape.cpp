#include<iostream>
using namespace std;
class shape
{
    public:
        double x,y;
        void get_data()
        {
            cout<<"Enter the values of x and y:";
            cin>>x>>y;
        }


};
class tirangle:public shape
{
    public:
    void display_area()
    {
        double area=0.5*x*y;
        cout<<"Area of Triangle:"<<area<<endl;
    }
};
class rectangle:public shape
{
    public:
    void display_area()
    {
        double area=x*y;
        cout<<"Area of Rectangle:"<<area<<endl;
    }
};