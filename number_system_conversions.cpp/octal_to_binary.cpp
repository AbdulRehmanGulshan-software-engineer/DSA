#include <iostream>
int main()
{
    // input by user
    int num;
    std::cout << "enter octal number : ";
    std::cin >> num;
    // first convert octal to decimal
    int rem, ans = 0, mul = 1;
    while (num)
    {
        rem = num % 10;
        num = num / 10;
        ans = rem * mul + ans;
        mul = mul * 8;
    }
    // now convert decimal to binary
    int num1 = ans;
    int rem1, ans1 = 0, mul1 = 1;
    while (num1)
    {
        rem1 = num1 % 2;
        num1 = num1 / 2;
        ans1 = rem1 * mul1 + ans1;
        mul1 = mul1 * 10;
    }
    std::cout << "Binary Number: " << ans1 << std::endl;
    return 0;
}