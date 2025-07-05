// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

#include <iostream>
#include <climits>
using namespace std;
int return_x(int x)
{
    int ans = 0, rem;
    while (x) // can be while(x!=0)
    {
        rem = x % 10;
        x /= 10;
        if (ans > INT_MAX / 10 || ans < INT_MIN / 10) // see notes for clarification
            return 0;
        ans = ans * 10 + rem;
    }
    return ans;
}
int main()
{
    // user input
    int x;
    cout << "enter x: ";
    cin >> x;
    cout << return_x(x) << endl;
}