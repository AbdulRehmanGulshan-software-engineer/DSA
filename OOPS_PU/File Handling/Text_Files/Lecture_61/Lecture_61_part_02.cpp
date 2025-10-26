// Fakhar Stem Youtube Lecture 60 part 2

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int x;
    double y;
    char ch;
    string str1;
    string str2;
    string str3;
    // creating object of ifstream class
    ifstream gulshan("gulshan.txt");                 // open a text file for reading
    gulshan >> x >> y >> ch >> str1 >> str2 >> str3; // fetching data from file gulshan.txt
    cout << x << " "
         << y << " "
         << ch << " "
         << str1 << " "
         << str2 << " "
         << str3 << endl;
    return 0;
}