
#include <iostream>
#include <string>

using namespace std;

void func1(); //prototype
void func2(); 

int main () {
    func1(); //calling a void function
    func2(); 

    return 0;
}

void func1() //definition & implementation
{
    cout << "I am func1\n";
}

void func2()
{

    cout << "I am func2\n";

}