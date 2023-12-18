#include <iostream>
#include <list>
#include <string>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string n, int a)
    {
        name = n;
        age = a;
    }
    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main()
{
    // Create a list of Person objects
    list<Person> peopleList;
    // Add objects to the list
    peopleList.push_back(Person("Vignesh", 25));
    peopleList.push_back(Person("Eswar", 30));
    peopleList.push_back(Person("Fakruddin", 22));
    // Display information from the list
    cout << "People in the list:" << endl;
    for (auto j : peopleList)
        j.display();
    return 0;
}
