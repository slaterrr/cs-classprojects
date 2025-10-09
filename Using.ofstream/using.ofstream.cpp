/*
Name
Date
Class
Proj. Desc


*/

#include <iostream> //opens iostream file for cin and cout
#include <string> //opens string file for strings
#include <fstream> //opens fstream file for ofstream

using namespace std;

//global declarations

int main () {

    ofstream outfile; //Creates an output stream object named outfile using the ofstream class.

    outfile.open ("Output.out");

    outfile << "Hello There Class!!\n";
    outfile << "My name is Slater!" << endl;
    outfile.close();

    //you can also just grab the file, without having to open it

    ofstream secondfile ("Testing ofstream.txt");
    secondfile << "This is a test to go straight into the file without opening ofstream\n";
    secondfile.close();

    return 0;
}