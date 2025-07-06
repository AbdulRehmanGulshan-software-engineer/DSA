// problem statement: Given an integer x, return true if x is a palindrome, and false otherwise.

// code here
#include <iostream>
#include <climits> //library file for using INT_MAX
// functtion for palindrome
bool is_pallindrome(int x)
{
    if (x < 0) // return false if negative
        return false;
    int ans = 0, rem, num = x;
    while (num) // loop breaking condition
    {
        rem = num % 10;
        num /= 10;
        if (ans > INT_MAX / 10) // overflow problem
            return false;
        ans = ans * 10 + rem;
    }
    if (ans == x)
        return true;
    else
        return false;
}
int main()
{
    // user input
    int num;
    std::cout << "enter number: ";
    std::cin >> num;
    // function calling
    std::cout << is_pallindrome(num) << std::endl;
}