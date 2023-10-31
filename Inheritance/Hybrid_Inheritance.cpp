#include <iostream>
using namespace std;
class location
{
    public:
        location()
        {
            cout << "Location" << endl;
        }
};
class player 
{
    public:
        player()
        {
            cout<<"Player"<<endl;
        }
};
class physique:public player
{
    public:
        physique()
        {
            cout<<"Physique"<<endl;
        }
};
class game:public location,public physique
{
    public:
        game()
        {
            cout<<"Game"<<endl;
        }
};
int main()
{
    game obj;
}
