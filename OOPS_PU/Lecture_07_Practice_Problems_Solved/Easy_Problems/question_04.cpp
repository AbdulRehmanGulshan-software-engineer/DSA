/*
Store a string (char[]) dynamically using new. Write and read it
from a binary file
*/

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    int n = 100;
    char *p = new char[n];
    cout << "Enter String : ";
    cin.getline(p, 100); // maximum 99 characters aor '\0'  // Yahan p already ek char* hai (poore char array ka base address).

    // writing into binary file
    // creating object of ofstream class
    int len = strlen(p);
    ofstream gulshan("hello.bin", ios::binary);
    // gulshan.write(p, n);
    gulshan.write((char *)&len, sizeof(len));
    gulshan.write(p, len);
    gulshan.close();

    // Reading Files
    // creating object of ifstream class for reading from file
    int len2;
    ifstream abdul("hello.bin", ios::binary);
    abdul.read((char *)&len2, sizeof(len2));
    char str[len2];
    abdul.close();

    // printing it
    cout << "Written String Is : " << p; //*p = dereference → matlab "jao us address pe jo p ke andar hai, aur uski value le aao."//yhan mene is liye sirf address use kiya hai p
    return 0;
}