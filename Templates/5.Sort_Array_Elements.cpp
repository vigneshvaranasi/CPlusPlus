#include <iostream>
#include <algorithm> 
using namespace std;
template <class T>
void sortArray(T &arr) {
    sort(begin(arr),end(arr));
}

int main() {

    int intArray[] = {5, 2, 8, 1, 7};
    char charArray[] = {'d', 'b', 'a', 'c'};

    cout << "Original intArray: ";
    for (auto i : intArray) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Original charArray: ";
    for (auto i : charArray) {
        cout << i << " ";
    }
    cout << endl;

    sortArray(intArray);
    sortArray(charArray);

    cout << "Sorted intArray: ";
    for (auto i : intArray) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Sorted charArray: ";
    for (auto i : charArray) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
