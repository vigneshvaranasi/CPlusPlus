#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int empno;
    string empname;
    string department;
    int age;
    double sal;

public:
    Employee()
    {
        cout << "Enter Employee No, Name, Department, Age, Salary: ";
        cin >> empno >> empname >> department >> age >> sal;
    }

    int getEmpNo() const
    {
        return empno;
    }

    // Method to find employee with maximum salary
    static Employee findMaxSalaryEmp(Employee empArray[], int size)
    {
        Employee maxEmp = empArray[0];

        for (int i = 1; i < size; i++)
        {
            if (empArray[i].sal > maxEmp.sal)
            {
                maxEmp = empArray[i];
            }
        }

        return maxEmp;
    }

    // Method to find employee with minimum salary
    static Employee findMinSalaryEmp(Employee empArray[], int size)
    {
        Employee minEmp = empArray[0];

        for (int i = 1; i < size; i++)
        {
            if (empArray[i].sal < minEmp.sal)
            {
                minEmp = empArray[i];
            }
        }

        return minEmp;
    }

    // Method to update salary
    void updateSalary(double newSalary)
    {
        sal = newSalary;
        cout << "Salary updated successfully!" << endl;
    }

    // Method to display employee details
    void display() const
    {
        cout << "Employee Details:" << endl;
        cout << "Employee No: " << empno << endl;
        cout << "Employee Name: " << empname << endl;
        cout << "Department: " << department << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << sal << endl;
    }
};

int main()
{
    const int size = 8; // Number of employees
    Employee empArray[size];

    // Display employee details
    for (int i = 0; i < size; i++)
    {
        empArray[i].display();
        cout << "------------------------" << endl;
    }

    // Find and display employee with maximum salary
    Employee maxSalaryEmp = Employee::findMaxSalaryEmp(empArray, size);
    cout << "Employee with Maximum Salary:" << endl;
    maxSalaryEmp.display();
    cout << "------------------------" << endl;

    // Find and display employee with minimum salary
    Employee minSalaryEmp = Employee::findMinSalaryEmp(empArray, size);
    cout << "Employee with Minimum Salary:" << endl;
    minSalaryEmp.display();
    cout << "------------------------" << endl;

    // Update salary for an employee
    int empToUpdate;
    cout << "Enter the employee number to update salary: ";
    cin >> empToUpdate;

    for (int i = 0; i < size; i++)
    {
        if (empArray[i].getEmpNo() == empToUpdate)
        {
            double newSalary;
            cout << "Enter the new salary: ";
            cin >> newSalary;

            empArray[i].updateSalary(newSalary);
            cout << "Updated Employee Details:" << endl;
            empArray[i].display();
            break;
        }
    }

    return 0;
}
