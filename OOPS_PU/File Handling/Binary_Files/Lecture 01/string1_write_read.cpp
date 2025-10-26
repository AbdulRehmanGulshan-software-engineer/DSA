#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string s = "Hello Gulshan Here";

    // creating object for writing file
    ofstream gulshan("hello.bin", ios::binary);
    int length = s.size();
    gulshan.write((char *)&length, sizeof(length)); // pehle length
    gulshan.write(s.c_str(), length);               // s.cstr() khud aik const character pointer hai bhaii is liye (char*) nhi use krna
    gulshan.close();

    // Reading
    // creating object for reading file
    ifstream abdul("hello.bin", ios::binary);
    int len2;
    abdul.read((char *)&len2, sizeof(len2)); // pehle length read kre ga
    char *buff = new char[len2 + 1];         // buffer banaya
    abdul.read(buff, len2);                  // utne characters read kiye bahii
    buff[len2] = '\0';                       // ab jo extra 1 liya tha usme '\0' store kro
    string s2 = buff;
    delete[] buff;
    abdul.close();

    cout << "Read String : " << s2;
    return 0;
}