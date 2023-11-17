#include<iostream>
using namespace std;
class Mammels
{
    public:
    void dispm()
    {
        cout<<"I am Mammal"<<endl;
    }
};
class MarineAnimals
{
    public:
    void dispma()
    {
        cout<<"I am Marine animal"<<endl;
    }
};
class BlueWhale:public Mammels,public MarineAnimals
{
    public:
    void dispbw()
    {
        cout<<"I belong to both the categories:Mammals as well as Marine Animals"<<endl;
    }
};
int main()
{
    Mammels mobj;
    mobj.dispm();
    MarineAnimals maobj;
    maobj.dispma();
    BlueWhale bwobj;
    bwobj.dispbw(); 
    bwobj.dispm();
    bwobj.dispma();  
}