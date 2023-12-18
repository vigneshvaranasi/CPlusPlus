#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    char ch;
    ifstream take("file1.txt");
    cout << "Current file position: " << take.tellg() << endl;

    ch = take.get();
    cout << "Character read: " << ch << endl;

    ch = take.get();
    cout << "Character read: " << ch << endl;

    cout << "Current file position: " << take.tellg() << endl;

    take.seekg(4, ios::beg);
    ch = take.get();
    cout << "Character read after seeking: " << ch << endl;

    cout << "Current file position: " << take.tellg() << endl;

    take.seekg(1, ios::cur);
    ch = take.get();
    cout << "Character read after seeking: " << ch << endl;

    cout << "Current file position: " << take.tellg() << endl;

    take.close();
    return 0;
}
