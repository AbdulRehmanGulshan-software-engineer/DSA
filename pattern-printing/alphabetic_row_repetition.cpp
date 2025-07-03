/*
a a a a a
b b b b b
c c c c c
d d d d d
e e e e e
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
        char name = 'a' + (i - 1);
        for (int j = 1; j <= cols; j++)
        {
            std::cout << name << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}