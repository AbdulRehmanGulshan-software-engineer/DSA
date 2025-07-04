/*
         1
       2 1
     3 2 1
   4 3 2 1
 5 4 3 2 1
*/
#include <iostream>
int main()
{
    // user input
    int n;
    std::cout << "enter rows number: ";
    std::cin >> n;
    // pattern code
    int row, col;
    for (row = 1; row <= n; row++) // outer loop
    {
        // space printing
        for (col = 1; col <= n - row; col++)
        {
            std::cout << "  ";
        }
        // number printing
        for (col = row; col >= 1; col--)
        {
            std::cout << " " << col;
        }
        std::cout << std::endl;
    }
    return 0;
}