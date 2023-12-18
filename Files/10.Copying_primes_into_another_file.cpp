#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
// Function to check if a number is prime
bool isPrime(int number)
{
    if (number <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(number); ++i)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ifstream inputFile("numbers.txt");
    ofstream outputFile("prime_numbers.txt");
    int number;
    // Read numbers from the input file and write primes to the output file
    while (inputFile >> number)
    {
        cout << "Read number: " << number << endl;
        if (isPrime(number))
        {
            outputFile << number << endl;
        }
    }
    inputFile.close();
    outputFile.close();

    cout << "Prime numbers written to file successfully." << endl;

    return 0;
}