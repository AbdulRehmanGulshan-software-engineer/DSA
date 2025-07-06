#include <iostream>

// factorial function
int factorial(int num)
{
    int ans = 1;
    for (int i = 1; i <= num; i++)
        ans = ans * i;
    return ans;
}
// function trailing zeros
int trailing_zeros(int num)
{
    int fact = factorial(num);
    int rem, count = 0;
    rem = num % 10;
    while (num && rem != 0)
    {
        rem = num % 10;
        num = num / 10;
        count++;
    }
    return count;
}
int main()
{
    std::cout <<  trailing_zeros(6) << std::endl;
}