/*
            * 
          * * * 
        * * * * * 
      * * * * * * * 
    * * * * * * * * * 
  * * * * * * * * * * * 
* * * * * * * * * * * * * 
 */
#include <iostream>
int main()
{
    // user input
    int n;
    std::cout << "enter n: ";
    std::cin >> n;
    // pattern code
    int row, col;
    for (row = 1; row <= n; row++)
    {
        // printing first space pattern
        for (col = 1; col <= n - row; col++)
        {
            std::cout << "  ";
        }

        // // first logic for stars printing 🔻
        // //  printing first right triangle
        // for (col = 1; col <= row; col++)
        // {
        //     std::cout << "*" << " ";
        // }
        // // printing second right triangle
        // for (col = row; col > 1; col--)
        // {
        //     std::cout << "*" << " ";
        // }

        // second logic for star printing 🔻
        for (col = 1; col <= 2 * row - 1; col++)
        {
            std::cout << "*" << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}