#include <iostream>
int main()
{
    int num;
    std::cout << "enter number: ";
    std::cin >> num;
    int sum = 0;
    for (int i = 1; i <= num; i++)
        sum = sum + (i * i);
    std::cout << "sum = " << sum << std::endl;
    return 0;
}