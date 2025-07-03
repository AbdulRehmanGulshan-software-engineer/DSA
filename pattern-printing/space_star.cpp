/*
 *
 * *
 * * *
 * * * *
 * * * * *
 */
#include <iostream>
int main()
{
    int row, col;
    // user input
    int n;
    std::cout << "input the number: ";
    std::cin >> n;
    for (row = 1; row <= n; row = row + 1)
    {
        // first print space pattern
        for (col = 1; col <= n - row; col = col + 1)
            std::cout << "  ";
        // print star pattern
        for (col = 1; col <= row; col = col + 1)
            std::cout << "*" << " ";
        std::cout << std::endl;
    }
}