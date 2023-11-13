#include <iostream>
#include <fstream>
using namespace std;
class Student
{
public:
    string name, dob;
    double cgpa;
    void read()
    {
        cout << "Enter the Name Date of Birth and CGPA of Student: ";
        cin >> name >> dob >> cgpa;
    }
};
int main()
{
    Student S[10];
    for (int i = 0; i < 10; i++)
        S[i].read();
    ofstream out("Student_Details.txt");
    out.write((char *)&S, sizeof(S));
    out.close();
    ifstream in("Student_Details.txt");
    in.read((char *)&S, sizeof(S));
    int max = S[0].cgpa, pos = 0;
    int i = 1;
    while (i < 10)
    {
        if (max < S[i].cgpa)
        {
            max = S[i].cgpa;
            pos = i;
        }
        i++;
    }
    cout << "The Details of student having highest CGPA is : " << endl;
    cout << "The Name of Student is : " << S[pos].name << endl;
    cout << "The Date of Birth of Student is : " << S[pos].dob << endl;
    cout << "The CGPA of Student is : " << S[pos].cgpa << endl;
}
