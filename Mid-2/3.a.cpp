#include<iostream>
using namespace std;
template <class T>
T find_mean(T arr[], int size) {
    T sum = 0;

    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / (size);
}
int main()
{
    int a[] = {3, 2, 1, 4, 34, 21, 67, 45, 87};
    float m[] = {2.3f,4.5f, 5.6f, 7.8f, 12.30};
    double d[] = {3.3, 5.9, 7.8, 3.1, 13.6, 11.3};
    cout << "Mean of an integer array" << find_mean(a, 9) << endl;
    cout << "Mean of an float array" << find_mean(m, 5) << endl;
    cout << "Mean of an double array" << find_mean(d, 6) << endl;
    return 0;
}
