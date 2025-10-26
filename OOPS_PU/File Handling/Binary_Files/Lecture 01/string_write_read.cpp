#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string s = "helloBinary";

    // creating object of ofstream class
    ofstream gulshan("hello.bin", ios::binary);
    int len = sizeof(s);
    gulshan.write((char *)&len, sizeof(len));
    gulshan.write(s.c_str(), len);
    gulshan.close();

    // read back
    ifstream abdul("hello.bin", ios::binary);
    int len2;
    abdul.read((char *)&len2, sizeof(len2));
    char *buff = new char[len2 + 1]; // buffer banaya
    abdul.read(buff, len2);
    buff[len2] = '\0';
    string s2 = buff;
    delete[] buff;
    abdul.close();

    cout << "Read String = " << s2 << endl;
    return 0;
}