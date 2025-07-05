#include <iostream>
int main()
{
    // input decimal number
    int num, rem, ans = 0, mul = 1;
    std::cout << "enter decimal number (0 to 9): ";
    std::cin >> num;
    int temp = num;
    while (num != 0)
    {
        // remainder
        rem = num % 8;
        // quotient
        num /= 8;
        // ans
        ans = rem * mul + ans;
        // mul 10^0,10^1,10^2,etc
        mul *= 10;
    }
    std::cout << temp << " in octal is : " << ans;
};