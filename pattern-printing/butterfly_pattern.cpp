/*
enter n value: 4
*             *
* *         * *
* * *     * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *
*/
#include <iostream>
int main()
{
    // user input
    int n;
    std::cout << "enter n value: ";
    std::cin >> n;
    // pattern code
    // printing upper part of pattern 🔻
    int row, col;
    for (row = 1; row <= n; row++)
    {
        // first print * row time
        for (col = 1; col <= row; col++)
            std::cout << "*" << " ";
        // then print spaces (2n - 2rows) times
        for (col = 1; col <= 2 * (n - row); col++)
            std::cout << "  ";
        // print *
        for (col = 1; col <= row; col++)
            std::cout << "*" << " ";
        // print ending line
        std::cout << std::endl;
    }
    // // printing lower part of pattern 🔻
    for (row = n - 1; row >= 1; row--)
    {
        // first print * row time
        for (col = row; col >= 1; col--)
            std::cout << "*" << " ";
        // then print spaces (2n - 2rows) times
        for (col = 1; col <= 2 * (n - row); col++)
            std::cout << "  ";
        // print *
        for (col = row; col >= 1; col--)
            std::cout << "*" << " ";
        // print ending line on each iteration
        std::cout << std::endl;
    }
}