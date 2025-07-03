#include <iostream>
int main()
{
    int num;
    std::cout << "Enter starting number: ";
    std::cin >> num;
    std::cout << "Numbers in reverse till 1 are: " << std::endl;
    for (int i = num; i >= 1; i--)
        std::cout << i << " ";
    return 0;
}