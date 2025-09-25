/*
Task 1: Apply a single check if a number has 1st, 2nd, and 4th all bits are ON or not.
Sample Input: Number = 27
Sample Output: The number has first, second and fourth bit on
Sample Input: Number = 25
Sample Output: The number has first, second and fourth bit not on
*/

// code
// must remember precedence concept level here
#include <iostream>
using namespace std;
int main()
{
    // input a number
    int number;
    cout << "Enter a number : ";
    cin >> number;

    // single check for 1st,2nd and 4th bit
    int mask = (1 << 0) | (1 << 1) | (1 << 3);
    if ((number & mask) == mask)
        cout << "The number has first, second and fourth bit on" << endl;
    else
        cout << "The number has first, second and fourth bit not on" << endl;
    return 0;
}