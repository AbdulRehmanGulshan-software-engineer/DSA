#include <iostream>
int main()
{
    // user input
    int num, rem, ans = 0, mul = 1;
    std::cout << "enter binary number (o or 1 only): ";
    std::cin >> num;
    while (num != 0)
    {
        // remainder
        rem = num % 10;
        // quotient
        num /= 10;
        // decimal answer
        ans = rem * mul + ans;
        // update mul by 2 power 0,1,2,3
        mul *= 2;
    }
    std::cout << ans << std::endl;
}