#include <iostream>
using namespace std;
class Point
{
public:
    int x, y;
    Point(int p, int q)
    {
        x=p;
        y=q;
    }
};
class Rectangle
{
public:
    Point left_top, right_bottom;
    Rectangle(Point p1, Point p2) : left_top(p1), right_bottom(p2) {}
    Rectangle(Point p1, int l, int b) : left_top(p1), right_bottom(p1.x + l, p1.y + b) {}
    Rectangle(int l, int b) : left_top(0, 0), right_bottom(l, b) {}
    int area()
    {
        return (right_bottom.x - left_top.x) * (right_bottom.y - left_top.y);
    }
};
int main()
{
    Point p1(2, 5),p2(8, 10);
    Rectangle r1(p1, p2),r2(p1, 5, 6),r3(5, 6);
    cout << "area=" << r1.area() << endl;
    cout << "area=" << r2.area() << endl;
    cout << "area=" << r3.area() << endl;
    return 0;
}