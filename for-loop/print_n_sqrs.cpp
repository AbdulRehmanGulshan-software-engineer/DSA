#include <iostream>
int main()
{
    int count;
    std::cout << "Enter iteration count: ";
    std::cin >> count;
    for (int i = 1; i <= count; i++)
        std::cout << i << " square is : " << i * i << std::endl;
    return 0;
}