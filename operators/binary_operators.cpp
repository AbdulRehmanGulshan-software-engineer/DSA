#include <iostream>
int main()
{
    // Binary Opearaors 🔻
    // division operator
    std::cout << 13 / 2 << std::endl;   // integer answer because of high precedence
    std::cout << 13.5 / 2 << std::endl; // floating answer because of higher precedence then integer
    // multiplication operator
    std::cout << 13 * 2 << std::endl;
    std::cout << 13.6 * 2 << std::endl;
    // modulus operator
    std::cout << 13 % 2 << std::endl; // gives remainder

    // Unary Opearaors 🔻
    // post increment
    int a = 10;
    std::cout << a++ << std::endl; // will print previous value
    std::cout << a << std::endl;

    int c = 10;
    int d = c++; // d will get c's previous value
    std::cout << d << " " << c << std::endl;

    // pre increment
    int e = 10;
    int f = ++e; // first e will increase by 1
    std::cout << f << " " << e << std::endl;

    // post decrement
    int g = 10;
    int h = g--; // g will assign orignal value,decrease later
    std::cout << h << " " << g << std::endl;

    // pre decrement
    int i = 10;
    int j = --i; // first decrease,then assign
    std::cout << j << " " << i << std::endl;
    return 0;
}