/*
This pattern is often referred to as a "Hollow Butterfly Pattern" or "Double Hollow Pyramid Pattern"

    * * * * * * * * * *
    * * * *     * * * *
    * * *         * * *
    * *             * *
    *                 *
    *                 *
    * *             * *
    * * *         * * *
    * * * *     * * * *
    * * * * * * * * * *
 */
#include <iostream>
int main()
{
    // user input
    int n;
    std::cout << "enter n value: ";
    std::cin >> n;
    // pattern code for decreasing area 🔻
    int row, col;
    for (row = n; row >= 1; row = row - 1)
    {
        // first print *
        for (col = 1; col <= row; col = col + 1)
            std::cout << "*" << " ";
        // then print space
        for (col = 1; col <= 2 * (n - row); col = col + 1)
            std::cout << "  ";
        // then in last print *
        for (col = 1; col <= row; col = col + 1)
            std::cout << "*" << " ";
        // print ending line
        std::cout << std::endl;
    }
    // pattern code for inecreasing area 🔻
    for (row = 1; row <= n; row++)
    {
        // first print *
        for (col = 1; col <= row; col = col + 1)
            std::cout << "*" << " ";
        // then print spaces
        for (col = 1; col <= 2 * (n - row); col = col + 1)
            std::cout << "  ";
        // in last print *
        for (col = 1; col <= row; col = col + 1)
            std::cout << "*" << " ";
        // print ending line
        std::cout << std::endl;
    }
}