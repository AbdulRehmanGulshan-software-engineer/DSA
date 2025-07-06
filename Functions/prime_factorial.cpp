#include <iostream>

// prime function
bool is_prime(int num)
{
    if (num < 2)
        return 0;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

// factorial function
int factorial(int num)
{
    int ans = 1;
    for (int i = 1; i <= num; i++)
        ans *= i;

    return ans;
}

// main function
int main()
{
    // user input
    int a, b;
    std::cout << "enter a: ";
    std::cin >> a;
    std::cout << "enter b: ";
    std::cin >> b;

    // a is prime or not
    std::cout << is_prime(a) << std::endl;

    // factorial of a
    std::cout << factorial(a) << std::endl;

    // b is prime or not
    std::cout << is_prime(b) << std::endl;

    // factorial of b
    std::cout << factorial(b) << std::endl;

    // b-a is prime or not
    std::cout << is_prime(b - a) << std::endl;

    // factorial of b-a
    std::cout << factorial << std::endl;
}