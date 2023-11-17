#include<iostream>
using namespace std;
class Book
{
    protected:
        string title,author;
    public:
        Book(string t,string a)
        {
            title=t;
            author=a;
        }
        void display()
        {
            cout<<"Title Of Book is:"<<title<<endl;
            cout<<"Author of book is : "<<author<<endl;
        }
};
class Fiction:public Book
{
    private:
        int level;
    public:
        Fiction(string t,string a,int l):Book(t,a)
        {
            level=l;
        }
        void display()
        {
            Book::display();
            cout<<"The Level of Book is:"<<level<<endl;
        }


};
class NonFiction:public Book
{
    private:
        int pages;
    public:
        NonFiction(string t,string a,int p):Book(t,a)
        {
            pages=p;
        }
        void display()
        {
            Book::display();
            cout<<"Number of Pages in the Book are:"<<pages<<endl;
        }
};
int main()
{
    Book obj1("Alphabet","People");
    obj1.display();
    Fiction obj2("Algebra","Pythagoras",300);
    obj2.display();
    NonFiction obj3("History","Hillary Clinton",400);
    obj3.display();
}