#include <iostream>
int main()
{
    int num;
    std::cout << "enter the number: ";
    std::cin >> num;
    if (num < 2)
    {
        std::cout << "not prime";
        return 0;
    }
    else
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                std::cout << "not prime" << std::endl;
                return 0;
            }
        }
        std::cout << "prime" << std::endl;
    }
}