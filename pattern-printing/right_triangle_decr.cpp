/*
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/
#include <iostream>
int main()
{
    // use input
    int n;
    std::cout << "input the number: ";
    std::cin >> n;
    int row, col;
    for (row = 1; row <= n; row++) // outer loop
    {
        for (col = row; col >= 1; col--) // inner loop
        {
            std::cout << col << " ";
        }
        std::cout << std::endl;
    }
}