/*Write a program to print the area of a rectangle by creating a class named 'Area' having two functions. First function named as 'setDim' takes the length and breadth of the rectangle as parameters and the second function named as 'getArea' returns the area of the rectangle. Length and breadth of the rectangle are entered through keyboard. */

#include<iostream>
using namespace std;
class rectangle
{
    public:
    double length,breadth,area;
    void get_details()
    {
        cout<<"Enter the length of the rectangle : ";
        cin>>length>>breadth;
    }

    void rectangle_area()
    {
        area=length*breadth;
        cout<<"Area of the Rectangle is "<<area<<endl;
    }
};
int main()
{
    rectangle obj;
    obj.get_details();
    obj.rectangle_area();
}