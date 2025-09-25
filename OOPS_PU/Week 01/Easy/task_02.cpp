/*
Task 2: Input three numbers and find, which two numbers are closer to each other.
Sample Input: 10 25 16
Sample Output: 10 & 16 are closer to each other
*/

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    // input three numbers
    int a, b, c;
    cout << "enter first number : ";
    cin >> a;
    cout << "enter second number : ";
    cin >> b;
    cout << "enter third number : ";
    cin >> c;

    // check closeness in terms of math
    if (abs(a - b) < abs(a - c) && abs(a - b) < abs(b - c))
        cout << a << " & " << b << " are closer to each other";
    else if (abs(a - c) < abs(a - b) && abs(a - c) < abs(b - c))
        cout << a << " & " << c << " are closer to each other";
    else
        cout << b << " & " << c << " are closer to each other";
    return 0;
}