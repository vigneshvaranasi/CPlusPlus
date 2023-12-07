#include <iostream>
#include <string>
using namespace std;

class Date
{
public:
    int day, month, year;
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    void setDate(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }

    void displayDate() const
    {
        cout << day << "/" << month << "/" << year;
    }

    string asString()
    {
        return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
    }
};

class Member
{
private:
    int num;
    string name;
    const Date birthdate;

public:
    static Member *ptrBoss;

    Member(int i, string n, Date d) : num(i), name(n), birthdate(d) {}

    Member(int n, string nm, int d, int m, int y) : num(n), name(nm), birthdate(d, m, y) {}

    void display()
    {
        cout << "id: " << num << endl;
        cout << "name: " << name << endl;
        cout << "DOB: ";
        birthdate.displayDate();
        cout << endl;
    }

    void setNr(int n)
    {
        num = n;
    }

    void setName(string nm)
    {
        name = nm;
    }

    int getNr() const
    {
        return num;
    }

    static void setBoss(Member *boss)
    {
        ptrBoss = boss;
    }

    static Member *getBoss()
    {
        return ptrBoss;
    }
};

Member *Member::ptrBoss = NULL;

int main()
{
    Date today(3, 3, 3);
    today.setDate(5, 5, 5);
    cout << "Date: " << today.asString() << endl;
    Member fran(0, "Quick, Fran", 17, 11, 81),
        kurt(2222, "Rush, Kurt", Date(3, 5, 77));
    fran.setNr(1111);
    cout << "\nTwo members of the sports club:\n"
         << endl;
    fran.display();
    kurt.display();
    cout << "\nSomething changed!" << endl;
    fran.setName("Rush-Quick");
    fran.display();
    Member benny(1122, "Rush, Benny", 1, 1, 2000);
    cout << "The youngest member of the sports club: \n";
    benny.display();
    // Who is the boss?
    int nr;
    Member *ptr = NULL;
    cout << "\nWho is the boss of the sports club?\n"
         << "Enter the member number: ";
    if (cin >> nr)
    {
        if (nr == fran.getNr())
            ptr = &fran;
        else if (nr == kurt.getNr())
            ptr = &kurt;
        Member::setBoss(ptr);
    }
    cout << "\nThe Boss of the sports club:" << endl;
    ptr = Member::getBoss();
    if (ptr != NULL)
        ptr->display();
    else
        cout << "No boss existing!" << endl;
    return 0;
}