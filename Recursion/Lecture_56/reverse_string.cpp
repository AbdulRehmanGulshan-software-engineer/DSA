#include <iostream>
using namespace std;

// function prototype
void reverseString(string &str, int start, int end);
int main()
{
    string str = "Big Gamez";
    reverseString(str, 0, str.size() - 1);
    cout << str << endl;
    return 0;
}

// defined function reverseString
void reverseString(string &str, int start, int end)
{
    // base case
    if (start >= end)
        return;

    // minor solution
    swap(str[start], str[end]);
    reverseString(str, start + 1, end - 1);
}