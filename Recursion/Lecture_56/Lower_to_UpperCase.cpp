#include <iostream>
using namespace std;

// function prototype
void LowerToUpper(string &str, int index);
int main()
{
    // input string
    string str;
    cout << "enter string : ";
    cin >> str;

    // called function
    LowerToUpper(str, str.size() - 1);

    // print on console
    cout << str;

    return 0;
}

// defined function LowerToUpper
void LowerToUpper(string &str, int index)
{
    // base case
    if (index == -1)
        return;

    // minor solution
    str[index] = 'A' + str[index] - 'a';
    LowerToUpper(str, index - 1);
}
