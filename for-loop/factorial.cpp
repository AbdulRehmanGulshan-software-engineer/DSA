#include <iostream>
int main()
{
    // first logic 👇
    // int num;
    // std::cout << "enter number : ";
    // std::cin >> num;
    // int fact = 1;
    // for (int i = 1; i < num; i++)
    // {
    //     fact = fact * ++i;
    //     i--;
    // }
    // std::cout << "factorial = " << fact << std::endl;

    // second logic 👇
    int num;
    std::cout << "enter number : ";
    std::cin >> num;
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    std::cout << "factorial = " << fact << std::endl;
    return 0;
}