#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number:";
    cin >> n;
    try
    {
        if (n < 0)
            throw n;
        else if (n > 0 && n < 100)
            throw 'a';
        else
            cout << "No Exception";
    }

    catch (...)
    {
        cout << "Exception Caught" << endl;
    }

    return 0;
}
