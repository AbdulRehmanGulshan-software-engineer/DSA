/*
a b c d e
a b c d e
a b c d e
a b c d e
a b c d e
*/
#include <iostream>
int main()
{
    int rows, cols;
    std::cout << "enter rows: ";
    std::cin >> rows;
    std::cout << "enter cols: ";
    std::cin >> cols;
    for (int i = 1; i <= rows; i++)
    {
        // first method ⬇️
        // for (int j = 1; j <= cols; j++)
        // {
        //     char name = 'a' + (j - 1);
        //     std::cout << name << " ";
        // }

        // alternative method ⬇️
        for (char j = 'a'; j < 'a' + cols; j++)
        {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}