#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Person
{
protected:
    string name;

public:
    Person(const string &n) : name(n) {}
    string getName() const
    {
        return name;
    }

    // Add virtual methods
    virtual void listOfCoursesOpted() const = 0;
    virtual void listOfFacultyTeachingCourses() const = 0;
    virtual void facultyTeaching(const string &courseName) const = 0;
};

class Teacher : public Person
{
private:
    string designation;
    string department;

public:
    Teacher(const string &n, const string &desig, const string &dept)
        : Person(n), designation(desig), department(dept) {}

    string getDesignation() const
    {
        return designation;
    }

    string getDepartment() const
    {
        return department;
    }

    void listOfCoursesOpted() const override
    {
        cout << "Teacher " << getName() << " is not a student. No courses opted." << endl;
    }

    void listOfFacultyTeachingCourses() const override
    {
        cout << "Teacher " << getName() << " is teaching in the " << getDepartment() << " department." << endl;
    }

    void facultyTeaching(const string &courseName) const override
    {
        cout << "Teacher " << getName() << " is teaching " << courseName << "." << endl;
    }
};

class Student : public Person
{
private:
    int rollNumber;
    string optedCourse;

public:
    Student(const string &n, int roll, const string &course)
        : Person(n), rollNumber(roll), optedCourse(course) {}

    int getRollNumber() const
    {
        return rollNumber;
    }

    string getOptedCourse() const
    {
        return optedCourse;
    }

    void listOfCoursesOpted() const override
    {
        cout << "Student " << getName() << " has opted for " << getOptedCourse() << "." << endl;
    }

    void listOfFacultyTeachingCourses() const override
    {
        cout << "Student " << getName() << " is not a teacher. No faculty information available." << endl;
    }

    void facultyTeaching(const string &courseName) const override
    {
        cout << "Student " << getName() << " is not a teacher. No faculty information available." << endl;
    }
};

void displayInformation(const vector<Person *> &people, const string &courseName)
{
    cout << "Information for course: " << courseName << endl;
    for (const auto &person : people)
    {
        person->listOfCoursesOpted();
        person->listOfFacultyTeachingCourses();
        person->facultyTeaching(courseName);
        cout << "------------------------" << endl;
    }
}

int main()
{
    vector<Person *> people;
    Teacher teacher1("Dr. D. Samson", "Professor", "CSE");
    Teacher teacher2("Dr. M. Williamson", "Associate Prof.", "CSE");
    Student student1("M. Rama Krishna", 101, "Data Science");
    Student student2("S. Hari Krishna", 102, "Artificial Intelligence");
    people.push_back(&teacher1);
    people.push_back(&teacher2);
    people.push_back(&student1);
    people.push_back(&student2);
    displayInformation(people, "Data Science");
    return 0;
}
