#include <bits/stdc++.h>
using namespace std;

// main function
int main()
{
    string s = "abdul rehman gulshan is a \"good\" boy ";
    cout << s << endl;

    string str = "printing escape character \\";
    cout << str << endl;

    string p = "printing null space \\0";
    cout << p << endl;

    string b = "\0";   // dont give error // length 0 , an empty string
    cout << b << endl; // prints blank space
    cout << b.size() << endl;
    cout << "b[0] = " << (int)b[0] << endl; // printing a garbage value.

    string d(1, '\0'); // length 1
    cout << d << endl; // prints blank space
    cout << d.size() << endl;
    cout << "d[0] = " << (int)d[0] << endl; // printing ascii of null character

    return 0;
};