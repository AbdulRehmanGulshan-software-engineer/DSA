#include <bits/stdc++.h>
using namespace std;

void string_balance_check(string temp)
{
    int index = 0, count = 0, depth;
    for (int i = 0; i < temp.size(); i++)
    {
        if (temp[i] == "(" || temp[i] == "{" || temp[i] == "[")
        {
            count += 1;
        }
    }
}
int main()
{
    // input
    int T;
    cout << "Enter Number Of Test Cases : ";
    cin >> T;
    string str[T];
    for (int i = 0; i < T; i++)
    {
        cout << "Enter Test Case " << i + 1 << " :";
        cin >> str[i];
        // for (int j = 0; j < str[i].size(); j++)
        // {
        //     if (str[i][j] != "(" || str[i][j] != ")" || str[i][j] != "{" || str[i][j] != "}" || str[i][j] != "[" || str[i][j] != "]")
        //     {
        //         cout << "Invalid Input!";
        //         return -1;
        //     }
        // }
    }
    return 0;
}