#include <iostream>
int main()
{
    // input decimal number
    int num, rem, ans = 0, mul = 1;
    std::cout << "enter decimal number : ";
    std::cin >> num;
    int temp = num;
    while (num != 0)
    {
        // remainder
        rem = num % 2; // we can also use bitsise AND i.e. rem=num&1;
        // quotient
        num /= 2; // we can also use right-shift (>>) i.e. num=num>>1;
        // ans
        ans = rem * mul + ans;
        // mul 10^0,10^1,10^2,etc
        mul *= 10;
    }
    std::cout << temp << " in binary is : " << ans;
};