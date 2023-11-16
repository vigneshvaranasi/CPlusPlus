#include<iostream>
using namespace std;
class student
{
    public:
    int age;
    string name,address;
    student()
    {
        age=0;
        name="unknown";
        address="not available";
    }
    void setinfo(string n,int a)
    {
        name=n;
        age=a;
    }
    void setinfo(string n,int a,string add)
    {
        name=n;
        age=a;
        address=add;
    }
    void show()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Address:"<<address<<endl;
    }
};
int main()
{
    student s[5];
    int t;
    for(int i=0;i<5;i++)
    {
        cout<<"Do you have Student Address:";
        cin>>t;
        if(t)
        {
            cout<<"Enter Name,age and address:";
            cin>>s[i].name>>s[i].age>>s[i].address;
            s[i].setinfo(s[i].name,s[i].age,s[i].address);
            s[i].show();
        }
        else
        {
            cout<<"Enter Name and age:";
            cin>>s[i].name>>s[i].age;
            s[i].setinfo(s[i].name,s[i].age);
            s[i].show();
        }
    }
}