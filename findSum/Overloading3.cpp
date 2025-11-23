/*

Overloading with 2 functions with the same name but having different parameter arguments.

*/

#include <iostream>
#include <string>

using namespace std;

int add(int, int);
float add(float, float);

int main ()
{
    
    int x = 5, y = 17;
    float a = 22.7, b = 33.5;

    cout << add(x,y) << endl;
    cout << add(a,b) << endl;

    return 0;
}

int add(int a, int b)
{
    return a+b;
}

float add(float a, float b)
{
    return a+b;
}

