#include <iostream>
// swap function
void swap(int &a, int &b) // & symbol shows pass by reference
{
    int c;
    c = a;
    a = b;
    b = c;
}

// main function
int main()
{
    // user input
    int a, b;
    std::cout << "enter a: ";
    std::cin >> a;
    std::cout << "enter b: ";
    std::cin >> b;

    // calling function
    swap(a, b);
    // print swapped a and b
    std::cout << a << " " << b;
}