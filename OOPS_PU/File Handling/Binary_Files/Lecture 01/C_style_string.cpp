#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char name[20] = "Gulshan";

    // writing char array 👇
    // creating object of ofstream classs for writing
    ofstream gulshan("hello.bin", ios::binary);
    gulshan.write((char *)&name, sizeof(name)); // puray 20 bytes likh diye
    gulshan.close();

    // reading char array 👇
    char name2[20];
    ifstream abdul("hello.bin", ios::binary);
    abdul.read((char *)name2, sizeof(name2));
    abdul.close();

    cout << "Read String : " << name2 << endl;
    return 0;
}