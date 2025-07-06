#include <iostream>
int main()
{
    // user input
    int num;
    std::cout << "enter binary number: ";
    std::cin >> num;
    int rem, ans = 0, mul = 1;
    // first convert binary to decimal
    while (num)
    {
        rem = num % 10;
        num = num / 10;
        ans = rem * mul + ans;
        mul = mul * 2;
    }
    // now convert decimal to octal
    int num1 = ans;
    int rem1, ans1 = 0, mul1 = 1;
    while (num1)
    {
        rem1 = num1 % 8;
        num1 = num1 / 8;
        ans1 = rem1 * mul1 + ans1;
        mul1 = mul1 * 10;
    }
    std::cout << ans1 << std::endl;
}