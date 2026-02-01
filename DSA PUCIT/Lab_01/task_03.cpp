// odd-even mixer problem
// use getline to get space too

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Input: ";
    getline(cin, s);
    // rearranging
    cout << "Output: ";
    for (int i = 0; i < s.size(); i++)
    {
        if (i % 2 == 0)
            cout << s[i];
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (i % 2 == 1)
            cout << s[i];
    }
    return 0;
}