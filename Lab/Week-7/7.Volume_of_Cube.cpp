#include<iostream>
using namespace std;
class side
{
    public:
        int length;
        void read()
        {
            cout<<"Enter Lenght:";
            cin>>length;
        }
        void display()
        {
            cout<<"Given Length is:"<<length<<endl;
        }
};
class square:public side
{
    public:
        void area()
        {
            read();
            display();
            cout<<"The Area of Square is:"<<length*length<<endl;
        }
};
class cube:public side
{
    public:
    void volume()
    {
        read();
        display();
        cout<<"The Volume of Cube is:"<<length*length*length<<endl;
    }
};
int main()
{
    square obj;
    obj.area();
    cube cobj;
    cobj.volume();
}
