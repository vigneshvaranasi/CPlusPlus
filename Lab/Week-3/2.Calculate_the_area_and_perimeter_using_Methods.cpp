/*Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named 'Triangle' with a function to print the area and perimeter. */

#include<iostream>
using namespace std;
class triangle
{
    public:
    double s1,s2,s3;
    double area;
    double preimeter;
    void triangle_area()
    {
        double s=(s1+s2+s3)/2;
        area=(s*(s-s1)*(s-s2)*(s-s3));
        cout<<"Area of Triangle is:"<<area<<endl;
    }
    void triangle_perimeter()
    {
        preimeter=(s1+s2+s3);
        cout<<"Perimeter of Triangle is:"<<preimeter<<endl;
    }
};
int main()
{
    triangle obj;
    cout<<"Enter the sides of triangle:"<<endl;
    cin>>obj.s1>>obj.s2>>obj.s3;
    obj.triangle_area();
    obj.triangle_perimeter();
}