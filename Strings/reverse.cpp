#include <bits/stdc++.h>
using namespace std;

// main function
int main()
{
    string s = "gulshan";
    int start = 0, end = s.size() - 1;
    while (start < end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }

    cout << "reverse is : " << s << endl;
    return 0;
};