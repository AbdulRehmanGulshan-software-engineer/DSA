#include <iostream>
int main()
{
    int n;
    std::cout << "enter the number: ";
    std::cin >> n;
    int i = 1;     // initialize
    while (i <= n) // break condition
    {
        std::cout << i << std::endl;
        i++; // update
    }
    return 0;
}