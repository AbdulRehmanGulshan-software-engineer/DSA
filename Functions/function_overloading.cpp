#include <iostream>

// integer swap function
void swap(int &a, int &b) // pass by reference
{
    int c = a;
    a = b;
    b = c;
}

// float swap function
void swap(float &a, float &b) // function overloading ,same function name but changed parametrs datatypes
{
    float c = a;
    a = b;
    b = c;
}

// main function
int main()
{
    // user input
    int a, b;
    std::cout << "enter integer numbers with space : ";
    std::cin >> a >> b;
    float c, d;
    std::cout << "enter floating numbers with space : ";
    std::cin >> c >> d;

    // function calling
    swap(a, b);
    swap(c, d);
    std::cout << a << " " << b << std::endl;
    std::cout << c << " " << d << std::endl;
}