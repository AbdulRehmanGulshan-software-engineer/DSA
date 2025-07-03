/*
1 8 27 64 125
1 8 27 64 125
1 8 27 64 125
1 8 27 64 125
1 8 27 64 125
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
        for (int j = 1; j <= cols; j++)
            std::cout << j * j * j << " ";
        std::cout << std::endl;
    }

    return 0;
}