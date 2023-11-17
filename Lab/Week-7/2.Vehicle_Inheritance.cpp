#include<iostream>
using namespace std;
class vehicle
{
    public:
    void display()
    {
        cout<<"Vehicles are essential modes of transportation"<<endl;
    }
};
class TwoWheelers:public vehicle
{
    public:
    void display()
    {  
        cout<<"These Vehicals Contain 2 Wheels"<<endl;
    }
};
class ThreeWheelers:public vehicle
{
    public:
    void display()
    {
        cout<<"These Vehicals Contain 3 Wheels"<<endl;
    }
};
class FourWheelers:public vehicle
{
    public:
    void display()
    {
        cout<<"These Vehicals Contain 4 Wheels"<<endl;
    }
};
int main()
{
    TwoWheelers twoobj;
    twoobj.display();
    ThreeWheelers threeobj;
    threeobj.display();
    FourWheelers fourobj;
    fourobj.display();

}