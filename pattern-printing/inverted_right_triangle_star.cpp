/*

 * * * * *
 * * * *
 * * *
 * *
 *

 */
#include <iostream>
int main()
{
    // user input
    int n;
    std::cout << "enter rows : ";
    std::cin >> n;
    int row, col;
    for (row = 1; row <= n; row++) // outer loop
    {
        // first logic 🔻
        //  print * , n-(row-1) times
        for (col = 1; col <= n - (row - 1); col++) // inner loop
        {
            std::cout << "*" << " ";
        }

        // second logic 🔻
        // for (col = n; col >= row; col--)
        // {
        //     std::cout << "*" << " ";
        // }
        std::cout << std::endl;
    }
}