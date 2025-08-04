#include <bits/stdc++.h>
using namespace std;

// main function
int main()
{
    string s1 = "abdul", s2 = "rehman", s3 = "gulshan";
    string s4 = s1 + s2 + s3; // append method 01
    cout << s4 << endl;
    string s5 = s1.append(s2); // append method 02 // will change my s1 at memory
    cout << s5 << endl;
    // cout << s1 << endl;

    // push back character
    s2.push_back('G'); // method 01
    cout << s2 << endl;
    s2 = s2 + "ULSHAN"; // method 02 (attaching string)
    cout << s2 << endl;
    s2 = s2 + 's'; // method 02(attaching single character)
    cout << s2 << endl;

    // delete character
    s3.pop_back();
    cout << s3 << endl;
    return 0;
};