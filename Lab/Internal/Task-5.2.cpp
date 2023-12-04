#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
void findMMM(const int *p, const int &n, double &mean, double &median, int &mode)
{
    mean = 0.0;
    for (int i = 0; i < n; ++i)
    {
        mean += p[i];
    }
    mean /= n;
    int *tempArray = new int[n];
    copy(p,p+n, tempArray);
    sort(tempArray, tempArray + n);
    if (n % 2 == 0)
    {
        median = (tempArray[n / 2 - 1] + tempArray[n / 2]) / 2.0;
    }
    else
    {
        median = tempArray[n / 2];
    }
    delete[] tempArray;
    int maxCount = 0;
    for (int i = 0; i < n; ++i)
    {
        int count = 0;
        for (int j = 0; j < n; ++j)
        {
            if (p[j] == p[i])
            {
                ++count;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            mode = p[i];
        }
    }
}
int main()
{
    int *p, n, mode;
    double mean, median;
    cout << "Enter the number of elements: ";
    cin >> n;
    p = new int[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> p[i];
    }
    findMMM(p, n, mean, median, mode);
    cout << "Mean = " << mean << endl;
    cout << "Median = " << median << endl;
    cout << "Mode = " << mode << endl;
    delete[] p;
    return 0;
}