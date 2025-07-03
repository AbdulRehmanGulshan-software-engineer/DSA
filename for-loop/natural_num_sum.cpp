#include <iostream>
int main()
{
    // first logic 👇
    // int num, sum = 0;
    // std::cout << "enter natural number: ";
    // std::cin >> num;
    // for (int i = 1; i <= num; i++)
    //     sum += i;
    // std::cout << "sum = " << sum << std::endl;

    // second logic 👇
    int num;
    std::cout << "enter the number: ";
    std::cin >> num;
    std::cout << "sum = " << (num * (num + 1)) / 2 << std::endl;
    return 0;
}