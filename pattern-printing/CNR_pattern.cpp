/*
column number repitition pattern
1 2 3 4 5 
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
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
            std::cout << j << " ";
        std::cout << std::endl;
    }
    return 0;
}