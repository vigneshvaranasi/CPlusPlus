#include <iostream>
using namespace std;
int numArticles = 0;
class Article
{
    private:
        long articleNumber;
        string articleName;
        double salesPrice;

    public:
        Article(long int nr, const string &aName, double price)
        {
            articleNumber = nr;
            articleName = aName;
            salesPrice = (price < 0) ? 0.0 : price;
            numArticles++;
            cout << "Article " << articleNumber << " created." << endl;
        }
        ~Article()
        {
            cout << "Article " << articleNumber << " destroyed." << endl;
            numArticles--;
        }

        void print()
        {
            cout << "Article Number: " << articleNumber << endl;
            cout << "Article Name: " << articleName << endl;
            cout << "Article Price: " << salesPrice << " $" << endl;
            cout << "press enter to continue";
            cin.ignore();
            cout << endl;
        };
        inline void setNr(int nr)
        {
            articleNumber = nr;
        }
        inline void setName(string aName)
        {
            articleName = aName;
        }
        inline void setSP(double price)
        {
            salesPrice = (price < 0) ? 0.0 : price;
        }
        inline double getSP()
        {
            return salesPrice;
        }
};

void test()
{
    Article shirt(3333, "T-Shirt", 29.9);
    shirt.print();
    static Article net(4444, "volley ball net", 99.0);
    net.print();
    cout << "\nLast statement in function test()" << endl;
}
Article Article1(1111, "volley ball", 59.9);
int main()
{
    cout << "\nThe first statement in main().\n"
         << endl;
    Article Article2(2222, "gym-shoes", 199.99);
    Article1.print();
    Article2.print();
    Article &shoes = Article2; // Another name
    shoes.setNr(2233);
    shoes.setName("jogging-shoes");
    shoes.setSP(shoes.getSP() - 50.0);
    cout << "\nThe new values of the shoes object:\n";
    shoes.print();
    cout << "\nThe first call to test()." << endl;
    test();
    cout << "\nThe second call to test()." << endl;
    test();
    cout << "\nThe last statement in main().\n"
         << endl;
    return 0;
}