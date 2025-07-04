/*
enter n : 5
    *
   * *
  * * *
 * * * *
* * * * *
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
    std::cout << "enter n : ";
    std::cin >> n;
    // pattern code
    // printing upper part 🔻
    int row, col;
    for (row = 1; row <= n; row++)
    {
        // print space
        for (col = 1; col <= n - row; col++)
            std::cout << " ";
        // print *
        for (col = 1; col <= row; col++)
            std::cout << "*" << " ";
        // print iteration ending
        std::cout << std::endl;
    }
    // printing lower part 🔻
    for (row = n; row >= 1; row--)
    {
        // print space
        for (col = 1; col <= n - row; col++)
            std::cout << " ";
        // print *
        for (col = 1; col <= row; col++)
            std::cout << "*" << " ";
        // print iteration ending
        std::cout << std::endl;
    }
}