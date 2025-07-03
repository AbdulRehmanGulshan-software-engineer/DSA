/*
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1
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
        for (int j = cols; j >= 1; j--)
            std::cout << j << " ";
        std::cout << std::endl;
    }

    return 0;
}