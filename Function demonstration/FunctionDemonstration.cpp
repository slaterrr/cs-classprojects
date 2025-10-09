
#include <iostream>
#include <string>

using namespace std;

void func1(); //prototype

int main () {
    func1(); //call


    return 0;
}

void func1()
{
    cout << "I am func1\n";
}