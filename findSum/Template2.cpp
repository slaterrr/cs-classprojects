/*

Overloading with 2 functions with the same name but having different parameter arguments.

*/

#include <iostream>
#include <string>

using namespace std;

template<class Type>
Type add(Type, Type);


int main ()
{
    
    int x = 5, y = 17;
    float a = 22.7, b = 33.5;
    string s1 = "Hello ", s2 = "Goodbye";

    cout << add(x,y) << endl;
    cout << add(s1, s2) << endl;
    cout << add(a,b) << endl;

    return 0;
}
  
template<class Type>
Type add(Type a, Type b)
{
    return a+b;
}
