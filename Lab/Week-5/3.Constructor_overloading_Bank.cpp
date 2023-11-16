/* 3.Suppose you have a Piggie Bank with an initial amount of $50 and you have to add 
some more amount to it. Create a class ‘AddAmount’ with a data member named ‘amount’ 
with an initial value of $50. Now make two constructors of this class as follows:
1- without any parameter - no amount will be added to the Piggie Bank
2- having a parameter which is the amount that will be added to the Piggie Bank
Create an object of the ‘AddAmount’ class and display the final amount in the PiggieBank. */

#include<iostream>
using namespace std;
class AddAmount
{
    public:
        int amount=50;
        AddAmount(int n)
        {
            amount=amount+n;
        }
        AddAmount()
        {
            cout<<"No amount will be added to the Piggie Bank";
        }
        void display()
        {
            cout<<"The amount in the Piggie Bank is:"<<amount<<endl;
        }

};
int main()
{   
    int n;
    cout<<"Enter Ammount to be added:";
    cin>>n;
    if(n==0)
    {
        AddAmount obj1;
        obj1.display();
    }
    else
    {
        AddAmount obj2(n);
        obj2.display();
    }
}