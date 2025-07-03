/*
column number repitition pattern
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
#include <iostream>
int main()
{
    int row, col;
    // // first logic 🔻
    // for (row = 1; row <= 5; row++) // outer loop
    // {
    //     // print 1 to 5 - (row-1) times
    //     for (col = 1; col <= 5 - (row - 1); col++) // inner loop
    //     {
    //         std::cout << col << " ";
    //     }
    //     std::cout << std::endl;
    // }

    // second logic 🔻
    for (row = 5; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            std::cout << col << " ";
        }
        std::cout << std::endl;
    }

    // // thirdd logic 🔻
    // for (row = 1; row <= 5; row++)
    // {
    //     int count = 1;
    //     for (col = 5; col >= row; col--)
    //     {
    //         std::cout << count << " ";
    //         count = count + 1;
    //     }
    //     std::cout << std::endl;
    // }
}