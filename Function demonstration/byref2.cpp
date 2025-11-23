
#include <iostream>
#include <string>

using namespace std;

void setvals(int & , int &, int &); //prototype


int main () {
    int a,b,c;

    setvals(a,b,c);
    
    cout << a << b << c;

    return 0;
}

void setvals(int &x, int &y, int &z)
{

    cout << "val1 ";cin >> x;
    cout << "val2 "; cin >> y;
    cout << "val3 "; cin >> z;
}