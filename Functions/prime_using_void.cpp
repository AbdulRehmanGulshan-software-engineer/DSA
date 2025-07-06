#include <iostream>
// prime function
void is_prime(int num)
{
    if (num < 2)
    {
        std::cout << "not prime" << std::endl; // or std::cout << 0 << std::endl;
        //  return 0; // will generate error
        return; // means end the code and go out
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            std::cout << "not prime" << std::endl; // or std::cout << 0 << std::endl;
            return;
        }
    }
    std::cout << "prime number" << std::endl; // or std::cout << 1 << std::endl;
}

// main function
int main()
{
    // user input
    int num;
    std::cout << "enter number: ";
    std::cin >> num;

    // function calling
    is_prime(num);
}