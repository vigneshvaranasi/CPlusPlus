#include<iostream>
using namespace std;
class student
{
    private:
        int roll;
        string name;
    public:
        student()
        {
            cout<<"Enter Roll and Name:";
            cin>>roll>>name;
        }
        ~student()
        {
            cout<<"Given Roll Number is:"<<roll<<endl;
            cout<<"Given Name is:"<<name<<endl;
        }
};
int main()
{
    student obj;
}