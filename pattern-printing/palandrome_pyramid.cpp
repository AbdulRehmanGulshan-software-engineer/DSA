/*
        1 
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1
*/
#include <iostream>
int main()
{
    // user input
    int n;
    std::cout << "enter value of n: ";
    std::cin >> n;
    // pattern code
    int row, col;
    for (row = 1; row <= n; row = row + 1) // outer loop
    {
        // space printing
        for (col = 1; col <= n - row; col = col + 1)
            std::cout << "  ";
        // num printing from 1 to row
        for (col = 1; col <= row ; col++)
            std::cout << col << " " ;
        // num printing from (row-1) to 1
        for (col = row - 1; col >= 1; col--)
            std::cout << col << " ";
        std::cout << std::endl;
    }
}