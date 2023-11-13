/* Create a class named 'Student' with a string variable 'name' and an integer variable
 'roll_no'. Assign the value of roll_no as '2' and that of name as "John" by creating an 
 object of the class Student. */

#include<iostream>
using namespace std;
class student 
{
    public:
        string name;
        int roll;
};
int main()
{
    student obj;
    obj.name="Vignesh";
    obj.roll=9;
    cout<<"Name is:"<<obj.name<<endl;
    cout<<"Roll Number is:"<<obj.roll<<endl;

}