/*
row number repitition pattern
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
#include <iostream>
int main()
{
    // user input
    int n;
    std::cout << "enter rows number: ";
    std::cin >> n;
    int row, col;
    for (row = 1; row <= n; row++) // outer loop
    {
        for (col = 1; col <= row; col++) // inner loop
        {
            std::cout << row << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}