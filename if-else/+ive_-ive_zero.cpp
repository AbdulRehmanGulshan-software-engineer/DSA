#include <iostream>
int main()
{
    int number;
    std::cout << "enter the number: ";
    std::cin >> number;
    if (number > 0)
        std::cout << "positive number." << std::endl;
    else if (number == 0)
        std::cout << "number is zero." << std::endl;
    else
        std::cout << "negative number." << std::endl;
    return 0;
}