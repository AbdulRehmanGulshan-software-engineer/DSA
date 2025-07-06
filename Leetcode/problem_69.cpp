// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.
#include <iostream>
int main()
{
    // user input
    int num;
    std::cout << "enter number : ";
    std::cin >> num;
    // logic
    long long i = 1; //here use long long for overflow problem solving
    while (i * i < num)
        i++;
    if (i * i > num)
        i--;
    std::cout << i << std::endl;
};