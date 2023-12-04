#include <iostream>
using namespace std;
class Student
{
public:
    int rollno;
    string name;
    int age;
    double marks;
    void read()
    {
        cout << "Enter Roll No, Name, Age, and Marks: ";
        cin >> rollno >> name >> age >> marks;
    }
    void display()
    {
        try
        {
            if (age < 0)
                throw age;
            if (marks > 100 || marks < 0)
                throw 'v';
        }
        catch (int)
        {
            cout << "Exception: Invalid Age";
            exit(1);
        }
        catch (char)
        {
            cout << "Exception: Invalid Range";
            exit(1);
        }
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main()
{
    Student s;
    s.read();
    s.display();
    return 0;
}