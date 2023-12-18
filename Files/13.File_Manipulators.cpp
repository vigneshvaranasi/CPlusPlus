#include <iostream>
#include <iomanip> // Include the header for setw
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile("output.txt");
    outputFile << setw(10) << "Name" << setw(10) << "Age" << setw(10) << "Score" << endl;
    outputFile << setw(10) << "Vignesh" << setw(10) << 25 << setw(10) << 95.5 << endl;
    outputFile << setw(10) << "Eswar" << setw(10) << 30 << setw(10) << 98.0 << endl;
    outputFile << setw(10) << "Fakruddin" << setw(10) << 22 << setw(10) << 91.2 << endl;

    outputFile << endl;
    outputFile <<"Precision" <<setprecision(4) << 13.14159 << endl;
    outputFile << endl;
    outputFile <<"Fixed:"<<fixed<< 13.14 << endl;
    outputFile << endl;
    outputFile <<"Fixed:"<<fixed<< 13.19148 << endl;
    outputFile << endl;
    outputFile <<"Scientific :"<<scientific << 13.19148 << endl;
    outputFile << endl;

    outputFile << setw(10) << left << "Name" << setw(10) << "Age" << setw(10) << right << "Score" << endl;
    outputFile << setw(10) << left << "Vignesh" << setw(10) << 25 << setw(10) << right << 95.5 << endl;
    outputFile << setw(10) << left << "Eswar" << setw(10) << 30 << setw(10) << right << 98.0 << endl;
    outputFile << setw(10) << left << "Fakruddin" << setw(10) << 22 << setw(10) << right << 91.2 << endl;

    cout << "Data has been written to the file." << endl;
    outputFile.close();

    return 0;
}
