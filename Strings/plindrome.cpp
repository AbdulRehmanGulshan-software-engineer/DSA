#include <bits/stdc++.h>
using namespace std;

// main function
int main()
{
    string s;
    cout << "enter word : ";
    cin >> s;
    int start = 0, end = s.size() - 1;
    while (start < end)
    {
        if (s[start] != s[end])
        {
            cout << "not palindrome";
            return 0;
        }
        start++;
        end--;
    }
    cout << "palindrome";
    return 0;
};