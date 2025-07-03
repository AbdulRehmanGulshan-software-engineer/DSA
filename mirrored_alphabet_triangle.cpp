/*
Mirrored Right-Angled Alphabet Triangle
         A
       A B
     A B C
   A B C D
 A B C D E
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
        // // first logic alphabet print 🔻
        // for (char name = 'A'; name <= 'A' + row - 1; name++)
        // {
        //     std::cout << " " << name;
        // }

        // second logic for alphabet print 🔻
        for (col = 1; col <= row; col++)
        {
            char name = 'A' + col - 1;
            std::cout << " " << name;
        }
        std::cout << std ::endl;
    }
}