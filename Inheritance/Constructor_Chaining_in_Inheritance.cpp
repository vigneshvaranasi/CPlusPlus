#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string name;
    int age;
public:
    Person(string gname, int gage)
    {
        name=gname;
        age=gage;
    }

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

};
class Student : public Person {
private:
    string major;
public:
    Student( string name, int age,string gmajor):Person(name,age)
    {
        major=gmajor;
    }

    void displayStudentInfo() 
    {
        display();  // Accessing base class function
        cout << "Major: " << major << endl;
    }

};
int main() {
    // Creating a Person object
    Person person("John Doe", 25);
    person.display();

    // Creating a Student object
    Student student("Alice Smith", 20, "Computer Science");
    student.displayStudentInfo();

    return 0;
}
