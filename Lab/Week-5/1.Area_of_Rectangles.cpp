/* 1.Write a program to print the area of two rectangles having sides (4,5) and (5,8) 
respectively by creating a class named ‘Rectangle’ with a function named ‘Area’ which 
returns the area. Length and breadth are passed as parameters to its constructor. */

#include<iostream>
using namespace std;
class Rectangle
{
    public:
        int length,breadth;
        Rectangle()
        {
            cout<<"Eenter Length and Breadth:";
            cin>>length>>breadth;
        }
        int area()
        {
            return length*breadth;
        }
};
int main()
{
    Rectangle robj1,robj2;
    cout<<"Area of 1st Rectangle is:"<<robj1.area()<<endl;
    cout<<"Area of 2nd Rectangle is:"<<robj2.area()<<endl;
}