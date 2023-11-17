#include<iostream>
using namespace std;
class fruit
{
    public:
        int napple,nmango,total;
        void input()
        {
            cout<<"Enter Number of Apples and Mangoes:";
            cin>>napple>>nmango;
        }
        void calculate()
        {
            cout<<"Total Fruits Are:"<<napple+nmango<<endl;
        }
};
class apple:public fruit
{
    public:
        void display(int napple)
        {
            cout<<"Number of Apples are:"<<napple<<endl;
        }
};
class mango:public fruit
{
    public:
        void display(int nmango)
        {
            cout<<"Number of Mangoes are:"<<nmango<<endl;
        }
};
int main()
{
    fruit obj1;
    obj1.input();
    apple aobj;
    aobj.display(obj1.napple);
    mango mobj;
    mobj.display(obj1.nmango);
    obj1.calculate();
}