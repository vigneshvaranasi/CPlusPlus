/*Print the average of three numbers entered by the user by creating a class named 
'Average' having a function to calculate and print the average without creating any 
object of the Average class. */

#include<iostream>
using namespace std;
class average
{
    public:
    static float cal_average(float a,float b,float c)
    {
        return (a+b+c)/3;
    }
};
int main()
{
    int x,y,z;
    cout<<"Enter 3 Number to Get Their Average:";
    cin>>x>>y>>z;
    cout<<"\nThe Average is :"<<average::cal_average(x,y,z);
}