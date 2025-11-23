#include <iostream>
#include <string>
#include <fstream> //first
#include <iomanip>

using namespace std;

void print(string,int,int,float);
int main () {
    string name1, name2;
    int s1test1,s1test2, s2test1,s2test2;
    float avg1, avg2;
    ifstream fin("classdata.txt"); //second
    ofstream fout("CLASSOUTPUT.out");

    getline(fin,name1); //third
    fin >> s1test1 >> s1test2;
    fin.get();
    getline(fin,name2);
    fin >> s2test1 >> s2test2;
    fin.close(); //fourth

    avg1 = (s1test1 + s1test2) / 2.0;
    avg2 = (s2test1 + s2test2) / 2.0;

    cout << fixed << showpoint << setprecision(2);
    cout << "\t\tClass report\n";
    print (name1, s1test1,s1test2,avg1);
    fout << name2 << '\t' << s2test1 << '\t' << s2test2 << '\t' << avg2 << endl;

    return 0;
    
}

void print(string n, int t1, int t2, float average)
{
    cout << n<<'\t'<<t1<<'\t'<<t2<<'\t'<<average<<endl;
}