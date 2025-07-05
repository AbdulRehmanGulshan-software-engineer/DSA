/*problem : Given an integer n, return true if it is a power of two. Otherwise, return false.
An integer n is a power of two, if there exists an integer x such that n == 2x.*/
#include <iostream>
bool is_power_of_two(int x)
{
    if (x < 1)
        return 0;
    while (x != 1)
    {
        if (x % 2 == 1)
            return 0;
        else // else can be ignored
            x /= 2;
    }
    return 1;
}
int main()
{
    // user input
    int x;
    std::cout << "enter number : ";
    std::cin >> x;
    std::cout << is_power_of_two(x) << std::endl;
}