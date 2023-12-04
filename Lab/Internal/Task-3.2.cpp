#include <iostream>
#include <cmath>
using namespace std;
bool quadEquation(double a, double b, double c, double* x1Ptr, double* x2Ptr) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        return false;
    }
    *x1Ptr = (-b + sqrt(discriminant)) / (2 * a);
    *x2Ptr = (-b - sqrt(discriminant)) / (2 * a);

    return true;
}
void printQuadEquation(double a, double b, double c) 
{
    double x1, x2;

    cout << "Quadratic Equation Solutions" << endl;
    cout << a << "x^2 + " <<"("<< b <<")"<< "x + "<< "("<< c << ")"<<" = 0" << endl;

    if (quadEquation(a, b, c, &x1, &x2)) {
        cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
    } 
    else {
        cout << "No real solution." << endl;
    }
    cout << endl;
}
int main() {
    printQuadEquation(2.0, -2.0, -1.5);
    printQuadEquation(1.0, -6.0, 9.0);
    printQuadEquation(2.0, 0.0, 2.0);
    return 0;
}