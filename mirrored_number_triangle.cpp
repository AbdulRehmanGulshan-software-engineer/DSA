/*
Mirrored Right-Aligned Number Triangle
         1
       1 2
     1 2 3
   1 2 3 4
 1 2 3 4 5
*/
#include <iostream>
int main()
{
    // user input
    int n;
    std::cout << "enter rows: ";
    std::cin >> n;
    // pattern code
    int row, col;
    for (row = 1; row <= n; row++) // outer loop
    {
        // space print
        for (col = 1; col <= n - row; col++)
        {
            std::cout << "  ";
        }
        // number print
        for (col = 1; col <= row; col++)
        {
            std::cout << " " << col;
        }
        std::cout << std::endl;
    }
}