#include <iostream>
int main()
{
    int num;
    std::cout << "Enter number : ";
    std::cin >> num;
    std::cout << "Odd numbers till " << num << " are:" << std::endl;
    // first logic👇
    int count = 1;
    for (int i = 1; i <= num; i++)
        if (i % 2 == 1)
        {
            std::cout << count << ". " << i << std::endl;
            count++;
        }

    // second logic 👇
    // for (int i = 1; i <= num; i += 2)
    //     std::cout << i << std::endl;
    return 0;
}