#include <iostream>
int main()
{
    int n;
    std::cout << "enter number: ";
    std::cin >> n;
    int i = 1; // initialize
    do
    {
        std::cout << i << std::endl;
        i++; // update
    } while (i <= n);
    return 0;
}