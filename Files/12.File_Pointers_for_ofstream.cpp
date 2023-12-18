#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    char ch;
    ofstream give("file2.txt");
    give.put('v');
    give.put('\n');
    give.put('9');
    give.put('\n');
    give.put('H');
    give.put('e');
    give.put('l');
    give.put('l');
    give.put('o');
    cout<<give.tellp()<<endl;

    give.seekp(3, ios::beg);
    give.put('H');
    give.put('i');

    cout<<give.tellp()<<endl;
    give.close();
    return 0;
}
