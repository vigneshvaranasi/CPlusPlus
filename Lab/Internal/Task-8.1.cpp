#include <iostream>
class Point
{
public:
    int x, y;
    Point(int xCoordinate, int yCoordinate) : x(xCoordinate), y(yCoordinate) {}
};
class Rectangle
{
public:
    Point topLeft, bottomRight;
    Rectangle(const Point &p1, const Point &p2) : topLeft(p1), bottomRight(p2) {}
    Rectangle(const Point &p, int width, int height) : topLeft(p), bottomRight(p.x + width, p.y + height) {}
    Rectangle(int width, int height) : topLeft(0, 0), bottomRight(width, height) {}
    int area() const
    {
        return (bottomRight.x - topLeft.x) * (bottomRight.y - topLeft.y);
    }
};
int main()
{
    Point p1(2, 5), p2(8, 10);
    Rectangle r1(p1, p2), r2(p1, 5, 6), r3(5, 6);
    std::cout << "area=" << r1.area() << std::endl;
    std::cout << "area=" << r2.area() << std::endl;
    std::cout << "area=" << r3.area() << std::endl;
    return 0;
}