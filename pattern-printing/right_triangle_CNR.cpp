/*
column number repitition pattern
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
#include <iostream>
int main()
{
    // user input
    int n;
    std::cout << "input the number: ";
    std::cin >> n;
    int rows, cols;
    for (rows = 1; rows <= n; rows++) // outer loop
    {
        for (cols = 1; cols <= rows; cols++) // inner loop
        {
            std::cout << cols << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}