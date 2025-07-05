#include <iostream>
int main()
{
    // comparison operator 🔻
    // answer is 1 or 0 only
    int a, b;
    std::cout << "enter value of a: ";
    std::cin >> a;
    std::cout << "enter value of b: ";
    std::cin >> b;
    // == operator
    std::cout << "== operator" << std::endl;
    if (a == b)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;

    // > operator
    std::cout << "> operator" << std::endl;
    if (a > b)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;

    // < operator
    std::cout << "< operator" << std::endl;
    if (a < b)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;

    // >= operator
    std::cout << ">= operator" << std::endl;
    if (a >= b)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;

    // <= operator
    std::cout << "<= operator" << std::endl;
    if (a <= b)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;

    // != operator
    std::cout << "!= operator" << std::endl;
    if (a != b)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;
}