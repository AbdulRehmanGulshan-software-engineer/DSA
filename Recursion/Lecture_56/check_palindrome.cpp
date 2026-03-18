#include <iostream>
#include <string>
using namespace std;

// function prototype
bool checkPalindrome(string str, int start, int end);

int main()
{
    // hard coded
    string str = "nommon";
    cout << checkPalindrome(str, 0, 5);
}

// defined function
bool checkPalindrome(string str, int start, int end)
{
    // base condition
    if (start >= end)
        return 1;

    // solved minor problem
    if (str[start] != str[end])
        return 0;

    return checkPalindrome(str, start + 1, end - 1);
}