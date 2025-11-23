
#include <iostream>
#include <string>

using namespace std;

void func1(int ); //prototype


int main () {
    int x = 5;
    func1(x); //calling a void function
    cout << x << endl; 

    return 0;
}

void func1(int a) //definition & implementation
{
    cout << a << endl;
    a=22;
}