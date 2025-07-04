/*
enter value of n : 5
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/
#include <iostream>
int main()
{
    // user input
    int n;
    std::cout << "enter value of n : ";
    std::cin >> n;
    // pattern code
    int row, col;
    for (row = n; row >= 1; row = row - 1) // outer loop
    {
        // space printing
        for (col = 1; col <= n - row; col = col + 1)
            std::cout << "  ";
        // star printing
        for (col = 1; col <= (2 * row - 1); col = col + 1)
            std::cout << "*" << " ";
        // line end after each outer loop
        std::cout << std::endl;
    }
    return 0;
}