#include <iostream>
int main()
{
    // break
    for (int i = 1; i <= 10; i++)
    {
        if (i == 4)
            break; // break will exit from loopp
        std::cout << i << std::endl;
    }
    return 0;
}