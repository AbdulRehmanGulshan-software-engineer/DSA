#include <bits/stdc++.h>
using namespace std;

// recursive function
void printPattern(int n, int spaces = 0)
{
    // base case
    if (n == 0)
        return;

    // print space
    for (int i = 0; i < spaces; i++)
        cout << " ";
    // print star
    for (int i = 0; i < n; i++)
        cout << "* ";
    cout << endl;
    // recursive call
    printPattern(n - 1, spaces + 1);
}
int main()
{
    printPattern(5);
    return 0;
}