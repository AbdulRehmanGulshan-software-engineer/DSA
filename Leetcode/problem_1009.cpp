/*
Problem:The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer n, return its complement.
*/

// code here
#include <iostream>
// complement function
complement(int num)
{
    if (num == 0) //special case
        return 1;
    int ans = 0, rem, pow = 1;
    while (num)
    {
        rem = num % 2;
        if (rem == 1)
            rem = 0;
        else if (rem == 0)
            rem = 1;
        num = num / 2;
        ans = ans + rem * pow;
        pow = pow * 2;
    }
    return ans;
}
int main()
{
    // user input
    int num;
    std::cout << "enter number: ";
    std::cin >> num;
    // function calling
    std::cout << complement(num) << std::endl;
}