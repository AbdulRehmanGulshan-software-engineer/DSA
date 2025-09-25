/*
Task 7: Input an unsigned character and use bitwise OR to set the odd bits.
Sample Input: n = 10
Sample Output: 87 // ⚠️ not 87 should be 95
*/

#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "enter number : ";
    cin >> number;
    // store it as unsigned char
    unsigned char ch;
    ch = number;

    // create mask of all odd on
    int mask = (1 << 0) | (1 << 2) | (1 << 4) | (1 << 6);
    // set all odd of input
    ch = (ch | mask);
    cout << (int)ch << endl;
    return 0;
}