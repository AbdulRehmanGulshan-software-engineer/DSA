#include <iostream>
int main()
{
    int age;
    std::cout << "enter your age: ";
    std::cin >> age;
    if (age < 18)
        std::cout << "teenager" << std::endl;
    else
        std::cout << "adult" << std::endl;
    return 0;
}