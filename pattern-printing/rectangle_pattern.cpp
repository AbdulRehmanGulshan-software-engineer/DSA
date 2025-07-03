/*
10 10 10 10 10 
10 10 10 10 10
10 10 10 10 10
10 10 10 10 10
*/
#include <iostream>
int main()
{
    int rows, cols;
    rows = 4;
    cols = 5;
    for (int i = 1; i <= rows; i++)
    {
        for (int i = 1; i <= cols; i++)
            std::cout << "10" << " ";
        std::cout << std::endl;
    }
    return 0;
}