/*
Task 5: Set the first clear (0) bit of an unsigned character from right to left using bitwise
operations.
Sample Input: n = 9
Sample Output: n = 11
Explanation: 00...1001, from right first bit is 1, second bit from right is 0, therefore, by
setting second bit, we will get 00...1011, which is 11
*/

#include <iostream>
using namespace std;
int main()
{
    // input number
    int number;
    cout << "enter number : ";
    cin >> number;

    unsigned char ch;
    ch = number;

    // logic
    for (int i = 0; i < 8; i++)
    {
        if (!((1 << i) & ch))
        {
            ch = ch | (1 << i);
            break;
        }
    }

    // print output
    cout << (int)ch << endl;
}