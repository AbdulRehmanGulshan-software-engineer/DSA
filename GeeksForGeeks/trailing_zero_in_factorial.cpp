// problem : For an integer n, find the number of trailing zeroes in n!.
#include <iostream>

// trailing zeros function
int trailing_zeros(int n)
{
    int count = 0;
    while (n >= 5)
    {
        n /= 5;
        count += n;
    }
    return count;
}
int main()
{
    int num;
    std::cout << "enter the number: ";
    std::cin >> num;
    std::cout << trailing_zeros(num) << std::endl;
}