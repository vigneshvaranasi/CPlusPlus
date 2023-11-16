/* Write a program to demonstrate friend functions. */

#include<iostream>
using namespace std;
class student
{
    private:
        int roll;
        string name;
    public:
        void input()
        {
            cout<<"Enter Name:";
            cin>>name;
            cout<<"Enter Roll Number:";
            cin>>roll;
        }
        friend void display(student);
};
void display(student obj2)
{
    cout<<"Given Name is:"<<obj2.name<<endl;
    cout<<"Given Roll Number is:"<<obj2.roll<<endl;
}
int main()
{
    student obj1;
    obj1.input();
    display(obj1);

}
