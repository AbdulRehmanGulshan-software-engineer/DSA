#include <iostream>
int main()
{
    // user input
    int a, b;
    std::cout << "enter numbers with space: ";
    std::cin >> a >> b;
    
    std::swap(a, b); // in-built swap function in c++
    std::cout << a << " " << b;
}