/*
       1
     2 2
   3 3 3
 4 4 4 4
*/
#include <iostream>
int main()
{
    // user input
    int n;
    std::cout << "enter rows: ";
    std::cin >> n;
    int row, col;
    for (row = 1; row <= n; row = row + 1) // outer loop
    {
        // print space
        for (col = 1; col <= n - row; col++)
            std::cout << "  ";
        // print star
        for (col = 1; col <= row; col++)
            std::cout << " " << row;
        std::cout << std::endl;
    }
}