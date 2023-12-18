#include <iostream>
using namespace std;
class sample
{
    public:
        static int count;
        sample()
        {
            count++;
        }
};
int sample::count = 0;
int main()
{
    sample obj1,obj2,obj3;
    cout << "Number of objects created: " << sample::count << endl;
}