#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<string> student1_details = {"Vignesh", "18", "Male", "Developer"};
    vector<string> student2_details = {"Eswar", "17", "Male", "Designing"};
    vector<string> student3_details = {"Fakruddin", "19", "Male", "Tester"};

    map<int, vector<string>> student_map;

    student_map[101] = student1_details;
    student_map[102] = student2_details;
    student_map[103] = student3_details;

    int roll_number;
    cout<<"Enter The Student Roll Number:";
    cin>>roll_number;

    auto it = student_map.find(roll_number);
    if (it != student_map.end())
    {
        vector<string> &details = it->second;
        cout << "Student details for Roll Number " << roll_number << ": ";
        for (int i = 0; i < it->second.size(); ++i)
        {
            cout << it->second[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Student with Roll Number " << roll_number << " not found." << endl;
    }
    return 0;
}
