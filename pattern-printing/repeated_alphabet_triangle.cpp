/*
Right‑Angled Triangle of Repeated Alphabets.
a
b b
c c c
d d d d
e e e e e
*/
#include <iostream>
int main()
{
    // user input
    int n;
    std::cout << "input the number: ";
    std::cin >> n;
    int row,col;
    for (row = 1; row <= n; row++)
    {
        char name = 'a' + row - 1;
        for (col = 1; col <= row; col++)
        {
            std::cout << name << " ";
        }
        std::cout << std::endl;
    }
}