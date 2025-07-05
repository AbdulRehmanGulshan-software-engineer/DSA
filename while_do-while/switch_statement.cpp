#include <iostream>
int main()
{
    int i;
    std::cout << "enter the number: ";
    std::cin >> i;
    switch (i) // i can be int or char only, it cannot be float or double
    {
    case 1: // this 1 will compare with i
        std::cout << "Abdul" << std::endl;
        break; // remove break to see reaction
    case 2:
        std::cout << "Rehman" << std::endl;
        break;
    default: // his default is optinal if i does not match with all cases
        std::cout << "Gulshan" << std::endl;
    }
    return 0;
}