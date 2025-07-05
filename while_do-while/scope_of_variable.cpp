#include <iostream>
int main()
{
    // //example 1 🔻
    // // std::cout << n << std::endl; // ⚠️ error
    // int n = 10;
    // std::cout << n << std::endl;
    // // int n = 30; // ⚠️ error: redeclaration of 'int n'
    // n = 30; // allowed,changing n value
    // std::cout << n << std::endl;

    // //example 1 🔻
    int a = 10;
    int i = 30;
    if (i == 30)
    {
        int a = 30;
        std::cout << a << std::endl; // here a scope is till } in this if block
        // int a = 50; // ⚠️ error: redeclaration of 'int a'
    }
    std::cout << a << std::endl; // here a scope is till } in main block
}