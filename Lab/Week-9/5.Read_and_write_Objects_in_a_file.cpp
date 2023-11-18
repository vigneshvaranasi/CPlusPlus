#include<iostream>
#include<fstream>
using namespace std;
class student
{
    public:
        string name,dob;
        double cgpa;
        void read()
        {
            cout<<"Enter Student Name,DOB,CGPA:";
            cin>>name>>dob>>cgpa;
        }
};
int main()
{
    student s[2];
    for(int i=0;i<2;i++)
    {
        s[i].read();
    }
    ofstream input("file1.txt");
    input.write((char*)&s,sizeof(s));
    input.close();

    ifstream output("file1.txt");
    output.read((char*)&s,sizeof(s));

    int max=s[0].cgpa,pos=0;
    for(int i=0;i<2;i++)
    {
        if(max<s[i].cgpa)
        {
            max=s[i].cgpa;
            pos=i;
        }
    }
    cout<<"Student with Highest CGPA is:"<<endl;
    cout<<"Name:"<<s[pos].name<<endl;
    cout<<"DOB:"<<s[pos].dob<<endl;
    cout<<"CGPA:"<<s[pos].cgpa<<endl;

    output.close();
}