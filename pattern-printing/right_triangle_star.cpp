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
    for (row = 1; row <= 5; row++) // outer loop
    {
        for (col = 1; col <= row; col++) // inner loop
        {
            std::cout << "*" << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}