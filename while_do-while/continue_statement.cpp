#include <iostream>
int main()
{
    // continue
    for (int i = 1; i <= 10; i++)
    {
        if (i == 4)
            continue; // continue will skip the ioteration when i == 4
        std::cout << i << std::endl;
    }
    return 0;
}