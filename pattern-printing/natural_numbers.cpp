/*
1   2   3   4
5   6   7   8
9   10  11  12
13  14  15  16
*/
#include <iostream>
int main()
{
    int rows, cols;
    std::cout << "enter rows: ";
    std::cin >> rows;
    std::cout << "enter cols: ";
    std::cin >> cols;
    int num = 1;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            std::cout << num++ << "\t";

            // alternative logic ⬇️
            // std::cout <<  (i-1)*cols+j << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}