#include<iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    try 
    {
        if (num > 0)
            throw num;
        else if (num < 0)
            throw 'a';
    }
    catch (int) {
        cout << "Caught a positive number"<<endl;
    }
    catch (char) {
        cout << "Caught a negative number"<<endl;
    }
    return 0;
}
