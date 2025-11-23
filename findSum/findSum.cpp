
#include <iostream>
#include <string>

using namespace std;

void findSum(int =0, int =0, int =0, int =0); //prototype

int main ()
{
    findSum(1,2,3,4);
    findSum(10,20,30);
    findSum(11,22);
    findSum(5);
    findSum();

    return 0;
}

void findSum(int a, int b, int c, int d) //definition/implementation
{
    int sum = a + b + c + d;
    cout << "The sum is: " << sum << endl;
}
