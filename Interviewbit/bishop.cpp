#include <iostream>

// minimum of two function
int min(int a, int b)
{
    int minimum = (a < b) ? a : b;
    return minimum;
}

// bishop function
int bishop(int a, int b)
{
    int count = 0;

    count += min(a-1, 8-b);
    count += min(8-a, 8-b);
    count += min(8-a, b-1);
    count += min(a-1, b-1);

    return count;
}
// main function
int main()
{
    // user input
    int row, col;
    std::cout << "enter bishop row position: ";
    std::cin >> row;
    std::cout << "enter bishop col position: ";
    std::cin >> col;

    // function calling
    std::cout << "total possible moves = " << bishop(row, col);
    return 0;
}