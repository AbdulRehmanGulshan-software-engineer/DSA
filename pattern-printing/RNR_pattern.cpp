/*
row number repetition pattern
1 1 1 
2 2 2
3 3 3
4 4 4
*/
#include <iostream>
int main()
{
    int rows, cols;
    std::cout << "enter rows: ";
    std::cin >> rows;
    std::cout << "enter columns: ";
    std::cin >> cols;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
            std::cout << i << " ";
        std::cout << std::endl;
    }
    return 0;
}