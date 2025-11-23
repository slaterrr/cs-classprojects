#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main () {
ofstream fout("sampleoutput.txt");
    fout << "\tPassaic County Catering & Convention Services\tFinal Bill" << endl << endl;

    fout << "Customer name: \t\t" << "Mathew Zevallos" << endl;

    fout << "Number of adults: \t" << setw(30) << left << 40 << endl;
    fout << "Number of children: \t" << 20 << endl;
return 0;
}