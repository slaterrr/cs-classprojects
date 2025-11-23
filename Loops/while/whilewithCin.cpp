#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    int age;
    int counter = 0;
    while (counter<=10)
    {

        cout << "Name " << counter + 1 << " please: "; getline(cin,name);
        cout << "Age: "; cin >> age; 
        cin.get(); //reads the character in the buffer, can also use cin.ignore();
        cout << name << '\t' << age << endl;
        counter ++;
    }
    return 0;
}