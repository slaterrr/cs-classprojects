/*

Overloading with 2 functions with the same name but having different parameter arguments.

*/

#include <iostream>
#include <string>

using namespace std;

int add(int,int);
string add(string,string,string);

int main ()
{
  
    cout << add(5,7) << endl;
    cout << add("Hello"," ","Goodbye") << endl;


    return 0;
}

int add(int a, int b)
{
    return a+b;
}

string add(string a, string b, string c)
{
    return a + b + c;
}