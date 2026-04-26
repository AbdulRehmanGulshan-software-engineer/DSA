#include <bits/stdc++.h>
using namespace std;

// factorial using recursion
int findFactorial(int number)
{
    // base case
    if (number == 1)
        return 1;
    // solving small problem
    else
        return number * findFactorial(number - 1);
}

int main()
{
    cout << findFactorial(5);
        return 0;
}