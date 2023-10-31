#include <iostream>
using namespace std;
// Function to swap two integers using call by reference
void swapByReference(int &a, int &b) 
{
    int temp = a;
    a = b;
    b = temp;
}

int main() 
{
    int num1,num2;
    cout<<"Enter 2 Numbers to swap:";
    cin>>num1>>num2;
    cout << "Before swapping:"<< endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    // Call the swapByReference function with num1 and num2 as arguments
    swapByReference(num1, num2);

    cout << "After swapping: "<< endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    return 0;
}
