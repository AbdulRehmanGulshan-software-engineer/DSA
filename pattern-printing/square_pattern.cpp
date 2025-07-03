/*
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * *
*/
#include <iostream>
int main()
{
    int rows, cols;
    rows = 5;
    cols = 5;
    for (int i = 1; i <= rows; i++)
    {
        for (int i = 1; i <= cols; i++)
            std::cout << "*" << " ";
        std::cout << std::endl;
    }
    return 0;
};