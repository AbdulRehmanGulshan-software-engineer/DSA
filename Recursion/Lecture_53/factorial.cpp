#include <iostream>
using namespace std;

// factorial function
int fact(int n)
{
    // Base case
    if (n == 1 || n == 0) // no need of n = 1
        return 1;
    return n * fact(n - 1);
}

int main()
{
    int n;
    cin >> n;
    if (n < 0)
    {
        cout << "Factorial is not possible." << endl;
        return 0;
    }
    cout << fact(n) << endl;
    return 0;
}

// it cannot give answer for n = 100 because of integer overflow,but with the help of string we can save larger number and solve such problems.