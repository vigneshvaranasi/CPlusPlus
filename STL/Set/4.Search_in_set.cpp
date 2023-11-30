#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s = {1, 2, 3, 4, 5};
    int target = 3;
    auto i = s.find(target);
    if (i != s.end())
    {
        cout << "Element " << target << " found in the set." << endl;
    }
    else
    {
        cout << "Element " << target << " not found in the set." << endl;
    }
    return 0;
}
