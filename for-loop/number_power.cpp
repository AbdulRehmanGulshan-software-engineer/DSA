#include <iostream>
int main()
{
    int num, power;
    std::cout << "enter the number: ";
    std::cin >> num;
    std::cout << "enter the power: ";
    std::cin >> power;
    int sum = num;
    for (int i = 1; i < power; i++)
        sum = sum * num;
    std::cout << "answer is : " << sum;
    return 0;
}