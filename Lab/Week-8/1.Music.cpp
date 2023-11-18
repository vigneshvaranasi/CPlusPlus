#include<iostream>
using namespace std;
class MusicalComposition
{
    public:
        string title,composer;
        int yearwritten;
        MusicalComposition(string t,string c,int y)
        {
            title=t;
            composer=c;
            yearwritten=y;
        }
        virtual void display()
        {
            cout<<"Title:"<<title<<endl;
            cout<<"Composer:"<<composer<<endl;
            cout<<"Year Written:"<<yearwritten<<endl;
        }
};
class NationalAnthem:public MusicalComposition
{
    public:
        string nationname;
    NationalAnthem(string t,string c,int y,string aname):MusicalComposition(t,c,y)
    {
        nationname=aname;
    }
    void display()
    {
        MusicalComposition::display();
        cout<<"Nation:"<<nationname<<endl;
    }
};
int main()
{
    MusicalComposition *m;
    NationalAnthem n("Hukum","Anirudh",2023,"India");

    m=&n;
    m->display();
}