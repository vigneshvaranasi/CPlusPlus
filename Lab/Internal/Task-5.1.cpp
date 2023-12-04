#include <iostream>
using namespace std;
class Shape
{
    public:
        virtual double area() = 0;
};
class Triangle : public Shape
{
    private:
        double base;
        double height;
    public:
        Triangle(double b, double h)
        {
            base=b;
            height=h;
        }
        double area()  
        {
            return 0.5 * base * height;
        }
};
class Parallelogram : public Shape
{
private:
    double base;
    double height;

public:
    Parallelogram(double b, double h)
    {
        base=b;
        height=h;
    }
    double area()  
    {
        return base * height;
    }
};
class Circle : public Shape
{
private:
    double radius;
public:
    Circle(double r) 
    {
        radius=r;
    }
    double area()  
    {
        return 3.14 * radius * radius;
    }
};
int main()
{
    Shape *s;
    s= new Triangle(10.0, 20.0);
    cout << "Area of Triangle: " << s->area() << endl;
    delete s;
    s = new Parallelogram(15.0, 25.5);
    cout << "Area of Parallelogram: " << s->area() << endl;
    delete s;
    s = new Circle(3.5);
    cout << "Area of Circle: " << s->area() << endl;
    delete s;
    return 0;
}