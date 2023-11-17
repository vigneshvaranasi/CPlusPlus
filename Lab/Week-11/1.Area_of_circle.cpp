#include<iostream>
using namespace std;
template<class t>
double CircleArea(t r)
{
    double area;
    area=3.14*(r*r);
    return area;
}
int main()
{
    double res;
    res=CircleArea(20);
    cout<<"Area of Circle is:"<<res;
    res=CircleArea(20.3);
    cout<<"Area of Circle is:"<<res;
}