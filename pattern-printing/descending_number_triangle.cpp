/*
Reverse Order Number Triangle
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/
#include <iostream>
int main()
{
    // user input
    int n;
    std::cout << "input the number: ";
    std::cin >> n;
    int row, col;
    for (row = 1; row <= n; row++) // outer loop
    {
        // print 5 to 5-(row-1) times
        for (col = n; col >= n - (row - 1); col--) // inner loop
        {
            std::cout << col << " ";
        }
        std::cout << std::endl;
    }
}