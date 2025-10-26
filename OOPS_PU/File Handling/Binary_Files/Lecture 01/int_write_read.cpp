#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int a = 1234;
    // write int to binary file
    // creating object for writing into file
    ofstream gulshan("hello.bin", ios::binary);
    gulshan.write((char *)&a, sizeof(a));
    gulshan.close();

    // read int from file
    int b;
    // creating object of ifstream class
    ifstream abdul("hello.bin", ios::binary);
    abdul.read((char *)&b, sizeof(b));
    abdul.close();

    cout << "Read int = " << b << endl;
    return 0;
}