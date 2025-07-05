#include <iostream>
int main()
{
    // user input
    int num, rem, ans = 0, mul = 1;
    std::cout << "enter octal number (0 to 7): ";
    std::cin >> num;
    while (num != 0)
    {
        // remainder
        rem = num % 10;
        // quotient
        num /= 10;
        // decimal answer
        ans = rem * mul + ans;
        // update mul by 8 power 0,1,2,3
        mul *= 8;
    }
    std::cout << ans << std::endl;
}