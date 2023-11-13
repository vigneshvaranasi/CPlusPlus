/*Write a C++ program by creating an 'Employee' class having the following functions and print the
final salary.
1 - 'getInfo()' which reads the salary, number of hours of work per day 
2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours. */


#include<iostream>
using namespace std;
class Employee
{
    public:
    int salary,hours_per_day;
    void getinfo()
    {
        cout<<"Enter Salary and Number of Hours Per Day:";
        cin>>salary>>hours_per_day;
    }
    void AddSal()
    {
        if(salary<500)
        {
            salary+=10;
        }
    }
    void AddWork()
    {
        if(hours_per_day>6)
        {
            salary+=5;
        }
    }
    void display()
    {
        cout<<"The Salary Of the Employee is:"<<salary<<endl;
        cout<<"The Wroking Hours Of the Employee is:"<<hours_per_day<<endl;
    }
};
int main()
{
    Employee obj;
    obj.getinfo();
    obj.AddSal();
    obj.AddWork();
    obj.display();
}

